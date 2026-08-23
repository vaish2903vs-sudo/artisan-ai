function scrollToChat() {
    document.getElementById("chat").scrollIntoView({
        behavior: "smooth"
    });
}


function handleEnter(event) {
    if (event.key === "Enter") {
        sendMessage();
    }
}
async function sendMessage() {

    const input = document.getElementById("userInput");
    const message = input.value.trim();

    if (message === "") {
        return;
    }

    // Show user's message
    addMessage(message, "user");

    // Clear input
    input.value = "";

    // Show loading message
    addMessage("Thinking... 🤔", "bot");

    try {

        const response = await fetch("http://localhost:3000/api/chat", {
            method: "POST",

            headers: {
                "Content-Type": "application/json"
            },

            body: JSON.stringify({
                message: message
            })
        });

        const data = await response.json();

        // Remove "Thinking..."
        const messages = document.getElementById("chatMessages");
        messages.lastElementChild.remove();

        if (!response.ok) {
            throw new Error(data.error || "Something went wrong");
        }

        // Show AI response
        addMessage(data.reply, "bot");

    } catch (error) {

        console.error(error);

        const messages = document.getElementById("chatMessages");

        if (messages.lastElementChild) {
            messages.lastElementChild.remove();
        }

        addMessage(
            "Sorry, I couldn't connect to the AI. Please check that the backend is running.",
            "bot"
        );
    }
}
    addMessage(message, "user");

    input.value = "";

    setTimeout(() => {

        const response = generateResponse(message);

        addMessage(response, "bot");

    }, 700);
    
function addMessage(text, type) {

    const messages = document.getElementById("chatMessages");

    const messageDiv = document.createElement("div");

    messageDiv.classList.add("message", type);

    messageDiv.innerText = text;

    messages.appendChild(messageDiv);

    messages.scrollTop = messages.scrollHeight;
}


function generateResponse(question) {

    const q = question.toLowerCase();


    if (q.includes("ohm")) {

        return "Ohm's Law states that V = IR, where V is voltage, I is current and R is resistance. If resistance remains constant, current is directly proportional to voltage.";

    }


    if (q.includes("transformer")) {

        return "A transformer is an electrical device that transfers AC electrical energy from one circuit to another through electromagnetic induction. It can step voltage up or down.";

    }


    if (q.includes("binary search")) {

        return "Binary Search works on a sorted array. It repeatedly divides the search space into half. Its time complexity is O(log n).";

    }


    if (q.includes("oops") || q.includes("oop")) {

        return "OOP stands for Object-Oriented Programming. Its four major concepts are Encapsulation, Abstraction, Inheritance and Polymorphism.";

    }


    if (q.includes("html")) {

        return "HTML stands for HyperText Markup Language. It provides the structure of a webpage using elements such as headings, paragraphs, images, links and forms.";

    }


    if (q.includes("css")) {

        return "CSS stands for Cascading Style Sheets. It controls the appearance and layout of HTML elements, including colors, spacing, fonts and responsive design.";

    }


    if (q.includes("summarize")) {

        return "Sure! Paste the notes or paragraph you want summarized, and I can convert them into concise revision points.";

    }


    if (q.includes("quiz")) {

        return "Here's a quick question: What is the time complexity of Binary Search? A) O(n) B) O(log n) C) O(n²) D) O(1)";

    }


    return "I can help you understand concepts, solve programming doubts, summarize notes, create quizzes and prepare for exams. Try asking a specific study question!";
}