const input = document.querySelector(".input-box input");
const sendButton = document.querySelector(".send");
const welcome = document.querySelector(".welcome");

sendButton.addEventListener("click", sendMessage);

input.addEventListener("keydown", function(event) {
    if (event.key === "Enter") {
        sendMessage();
    }
});

function sendMessage() {

    const message = input.value.trim();

    if (message === "") {
        return;
    }

    welcome.innerHTML += `
        <div class="message">
            <strong>You:</strong>
            <p>${message}</p>
        </div>
    `;

    input.value = "";

    welcome.innerHTML += `
        <div class="message">
            <strong>My AI:</strong>
            <p>Hello! I received your message. 🤖</p>
        </div>
    `;
}