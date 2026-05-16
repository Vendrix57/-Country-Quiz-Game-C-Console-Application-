# Country Quiz Game (C)

A simple, interactive command-line application that tests your knowledge of world capitals. This project demonstrates core C programming concepts such as array manipulation, random number generation, and string handling.

## 🚀 Features

* **Randomized Questions:** Uses `srand` and `rand` to ensure the quiz order is different every time you play.
* **Duplicate Prevention:** Tracks asked questions using a flag array so you never get the same country twice in one session.
* **Case-Insensitivity:** Automatically converts user input to lowercase, so "Berlin", "berlin", and "BERLIN" are all accepted as correct.
* **Special Logic:** Includes specific handling for countries with multiple capitals (e.g., South Africa).

## 🛠️ Technical Overview

The code utilizes several standard C libraries:
- `stdio.h` & `stdlib.h`: For standard I/O and random memory functions.
- `string.h`: Used for `strcmp`, `strcpy`, and `strcspn` to manage user answers.
- `ctype.h`: Powering the `toLowerCase` helper function.
- `time.h`: To seed the random number generator based on the current system time.

## 📋 How to Run

1.  **Requirement:** You need a C compiler installed (like `gcc`).
2.  **Compile the code:**
    ```bash
    gcc quiz.c -o quiz
    ```
3.  **Run the executable:**
    ```bash
    ./quiz
    ```

## 🕹️ How to Play

1. The program will display a country name.
2. Type the name of the capital city and press **Enter**.
3. If you get it right, your score increases.
4. After 10 questions, your final score out of 10 will be displayed.

## 📝 Example Output

```text
*** COUNTRY QUIZ GAME ***

Tell me the capital of Germany: Berlin
CORRECT!

Tell me the capital of Japan: tokyo
CORRECT!

Your final score is: 2 / 10
