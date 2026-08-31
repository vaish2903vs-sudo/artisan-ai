const API_URL = "https://artisan-ai-1-zw4x.onrender.com/api/chat";


/* ================================
   SCROLL TO DASHBOARD
================================ */

function scrollToDashboard() {

    document
        .getElementById("dashboard")
        .scrollIntoView({
            behavior: "smooth"
        });

}


/* ================================
   GET PRODUCT INFORMATION
================================ */

function getProductData() {

    return {

        name: document
            .getElementById("productName")
            .value
            .trim(),

        cost: document
            .getElementById("productionCost")
            .value
            .trim(),

        description: document
            .getElementById("productDescription")
            .value
            .trim()

    };

}


/* ================================
   SEND PROMPT TO AI
================================ */

async function askAI(prompt) {

    try {

        showLoading();

        const response = await fetch(API_URL, {

            method: "POST",

            headers: {
                "Content-Type": "application/json"
            },

            body: JSON.stringify({
                message: prompt
            })

        });


        const data = await response.json();


        if (!response.ok) {

            throw new Error(
                data.error || "AI request failed"
            );

        }


        return data.answer;


    } catch (error) {

        console.error("AI Error:", error);

        document.getElementById("result").innerText =
            "Something went wrong: " + error.message;

        return null;

    }

}


/* ================================
   LOADING
================================ */

function showLoading() {

    document.getElementById("result").innerHTML =
        "<p>🤖 Artisan AI is analyzing your product...</p>";

}


/* ================================
   PRODUCT ANALYSIS
================================ */

async function analyzeProduct() {

    const product = getProductData();


    if (!product.name) {

        alert("Please enter the product name.");

        return;

    }


    const prompt = `

You are Artisan AI, an AI assistant helping
traditional Indian artisans and small producers.

Analyze this product:

Product: ${product.name}

Production Cost: ₹${product.cost}

Description:
${product.description}

Provide:

1. Product category
2. Target customers
3. Unique selling points
4. Potential markets
5. Suitable festivals or occasions
6. Marketing suggestions

Keep the answer simple, practical and useful.

Do not invent cultural facts.

`;


    const result = await askAI(prompt);


    if (result) {

        document.getElementById("result").innerText =
            result;

    }

}


/* ================================
   GENERATE CATALOGUE
================================ */

async function generateCatalogue() {

    const product = getProductData();


    if (!product.name) {

        alert("Enter product information first.");

        return;

    }


    const prompt = `

Create a professional product catalogue
for a traditional Indian artisan.

Product:
${product.name}

Description:
${product.description}

Generate:

1. Product Title
2. Product Description
3. Materials
4. Key Features
5. Craftsmanship
6. Target Customer
7. Suggested Keywords
8. Short Marketing Tagline

Make the description attractive but authentic.

Do not invent cultural facts.

`;


    const result = await askAI(prompt);


    if (result) {

        document.getElementById("result").innerText =
            result;

    }

}


/* ================================
   PRICING
================================ */

async function calculatePricing() {

    const product = getProductData();


    if (!product.cost) {

        alert("Enter production cost first.");

        return;

    }


    const prompt = `

You are a pricing assistant for a small Indian artisan.

Product:
${product.name}

Production Cost:
₹${product.cost}

Description:
${product.description}

Suggest:

1. Minimum reasonable price
2. Recommended selling price
3. Premium price
4. Estimated profit
5. Factors affecting the price

Consider:

- Labour
- Craftsmanship
- Materials
- Demand
- Market positioning

Clearly state that the prices are estimates
and not guaranteed market prices.

`;


    const result = await askAI(prompt);


    if (result) {

        document.getElementById("result").innerText =
            result;

    }

}


/* ================================
   DEMAND PREDICTION
================================ */

async function predictDemand() {

    const product = getProductData();


    if (!product.name) {

        alert("Enter product information first.");

        return;

    }


    const prompt = `

You are an AI demand forecasting assistant
for an Indian small producer.

Product:
${product.name}

Description:
${product.description}

Analyze potential demand based on:

- Seasonality
- Indian festivals
- Customer behaviour
- Product category
- Possible target regions

Provide:

1. Demand Level
2. High-demand periods
3. Production recommendation
4. Potential risks

This is an estimate and should not be presented
as guaranteed future demand.

`;


    const result = await askAI(prompt);


    if (result) {

        document.getElementById("result").innerText =
            result;

    }

}


/* ================================
   MARKET DISCOVERY
================================ */

async function discoverMarkets() {

    const product = getProductData();


    if (!product.name) {

        alert("Enter product information first.");

        return;

    }


    const prompt = `

Help an Indian artisan discover potential markets.

Product:
${product.name}

Description:
${product.description}

Suggest:

1. Ideal customer segments
2. Indian cities or regions
3. Online marketplace categories
4. Suitable occasions
5. Export-market possibilities
6. Marketing strategy

Explain why each market could be suitable.

Do not claim real-time market data unless provided.

`;


    const result = await askAI(prompt);


    if (result) {

        document.getElementById("result").innerText =
            result;

    }

}


/* ================================
   MARKETING
================================ */

async function generateMarketing() {

    const product = getProductData();


    if (!product.name) {

        alert("Enter product information first.");

        return;

    }


    const prompt = `

Create marketing content for an Indian artisan.

Product:
${product.name}

Description:
${product.description}

Generate:

1. Instagram caption
2. WhatsApp promotional message
3. Product tagline
4. Short advertisement
5. Festival promotion idea

Emphasize:

- Craftsmanship
- Authenticity
- Handmade quality
- Artisan story

Keep the content attractive and practical.

`;


    const result = await askAI(prompt);


    if (result) {

        document.getElementById("result").innerText =
            result;

    }

}