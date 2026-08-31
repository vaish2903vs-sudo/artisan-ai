const express = require("express");
const cors = require("cors");
require("dotenv").config();

const { GoogleGenerativeAI } = require("@google/generative-ai");

const app = express();

app.use(cors());
app.use(express.json());

const PORT = process.env.PORT || 5000;

console.log("Starting Artisan AI...");
console.log("API key loaded:", !!process.env.GEMINI_API_KEY);

const genAI = new GoogleGenerativeAI(
    process.env.GEMINI_API_KEY
);

const model = genAI.getGenerativeModel({
    model: "gemini-3.6-flash"
});


// TEST ROUTE
app.get("/", (req, res) => {

    res.json({
        success: true,
        message: "Artisan AI backend is running!"
    });

});


// AI ROUTE
app.post("/api/chat", async (req, res) => {

    console.log("\n===== AI REQUEST RECEIVED =====");

    console.log("Request body:", req.body);

    try {

        const message = req.body.message;

        if (!message) {

            return res.status(400).json({
                success: false,
                error: "Message is required"
            });

        }

        console.log("Sending request to Gemini...");

        const prompt = `
You are Artisan AI.

You help Indian artisans and small producers
with product descriptions, marketing,
pricing, demand analysis and market discovery.

User question:

${message}

Give a simple and practical answer.
`;

        const result = await model.generateContent(prompt);

        console.log("Gemini response received.");

        const response = await result.response;

        const answer = response.text();

        console.log("AI answer:", answer);

        res.json({
            success: true,
            answer: answer
        });

    }

    catch (error) {

        console.log("\n===== GEMINI ERROR =====");

        console.log(error);

        res.status(500).json({
            success: false,
            error: error.message
        });

    }

});


app.listen(PORT, () => {
    console.log(`Artisan AI server running on port ${PORT}`);
});