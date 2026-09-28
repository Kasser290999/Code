
const number =
Math.floor(Math.random() * 100) + 1;

let attempts = 5;

while (attempts > 0) {

    let guess = Number(prompt("Угадай число емае"));

    if (guess === number) {
        alert("Ты угадал вау!");
        break
    }
    if (guess > number) {
        alert("МЕНЬШЕ БАКА!");
    } else {
        alert("Больше б..бака!");
    }
        attempts--;
    }
    if (attempts === 0) {
        alert("Попыток нету ты проиграл!");
    }