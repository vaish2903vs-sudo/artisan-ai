const express = require("express");
const cors = require("cors");
const dotenv = require("dotenv");
const { GoogleGenAI } = require("@google/genai");

dotenv.config();

const app = express();

app.use(cors());
app.use(express.json());

const ai = new GoogleGenAI({
    apiKey: process.env.GEMINI_API_KEY
});

app.post("/api/chat", async (req, res) => {

    try {

        const { message } = req.body;

        if (!message) {
            return res.status(400).json({
                error: "Message is required"
            });
        }

        const response = await ai.models.generateContent({
            model: "gemini-2.5-flash",

            contents: message,

            config: {
                systemInstruction: `
                    You are StudyAI, a helpful AI study tutor.

                    Explain concepts in simple language.
                    Give step-by-step explanations when needed.
                    Help students with programming, engineering,
                    mathematics and exam preparation.

                    When explaining difficult concepts,
                    use simple examples and analogies.
                `
            }
        });

        res.json({
            reply: response.text
        });

    } catch (error) {

        console.error(error);

        res.status(500).json({
            error: "AI request failed"
        });
    }
});

app.listen(3000, () => {
    console.log("StudyAI backend running on port 3000");
});