* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    background: white;
    color: #222;
}

.app {
    display: flex;
    height: 100vh;
}


/* SIDEBAR */

.sidebar {
    width: 260px;
    background: #f5f5f0;
    padding: 20px;
    display: flex;
    flex-direction: column;
}

.sidebar h2 {
    margin-bottom: 20px;
}

.new-chat {
    padding: 12px;
    border: none;
    border-radius: 10px;
    background: #222;
    color: white;
    cursor: pointer;
    margin-bottom: 20px;
}

.sidebar p {
    padding: 10px;
    border-radius: 8px;
    cursor: pointer;
}

.sidebar p:hover {
    background: #e5e5df;
}

.sidebar h4 {
    margin-top: 25px;
    margin-bottom: 10px;
    color: #777;
}

.settings {
    margin-top: auto;
}


/* CHAT */

.chat {
    flex: 1;
    display: flex;
    flex-direction: column;
}

header {
    padding: 20px;
    border-bottom: 1px solid #eee;
}

.welcome {
    flex: 1;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}

.welcome h1 {
    font-size: 32px;
    margin-bottom: 10px;
}

.welcome p {
    color: #777;
}


/* INPUT */

.input-box {
    width: 70%;
    margin: 20px auto;
    padding: 10px;

    display: flex;
    align-items: center;
    gap: 10px;

    border: 1px solid #ddd;
    border-radius: 15px;
}

.input-box input {
    flex: 1;
    border: none;
    outline: none;
    font-size: 16px;
    padding: 10px;
}

.input-box button {
    border: none;
    background: transparent;
    cursor: pointer;
    font-size: 18px;
}

.input-box .send {
    background: #222;
    color: white;
    padding: 8px 12px;
    border-radius: 8px;
}
/* CHAT MESSAGES */

.message {
    width: 70%;
    margin: 15px auto;
    padding: 15px 20px;
    border-radius: 12px;
    background: #f4f4f0;
}

.message strong {
    display: block;
    margin-bottom: 8px;
}

.message p {
    margin: 0;
    line-height: 1.5;
}
.welcome {
    flex: 1;
    overflow-y: auto;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    padding: 30px;
}

.welcome h1 {
    font-size: 32px;
    margin-bottom: 10px;
}

.welcome > p {
    color: #777;
}