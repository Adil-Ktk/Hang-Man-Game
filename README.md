# 🕹️ Hangman Console Game (C++)

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows-blue?style=for-the-badge&logo=windows)

A classic Hangman-style console game developed to practice fundamental programming logic. This project was built during my 1st semester to bridge the gap between classroom theory and interactive software development.

---

## 📖 Project Overview

The game challenges players to guess a hidden animal name, represented by placeholders (`X`). 

### How it Works:
* **Selection:** The program picks a random word from a predefined list.
* **Interaction:** The player inputs letters to uncover the word.
* **Consequences:** Incorrect guesses lead to the incremental drawing of the "hangman" via ASCII art.
* **Outcome:** Reveal the word to win, or run out of lives and face the gallows!

To enhance the terminal experience, the game utilizes **ASCII-style graphics** and **colored output** for a more engaging user interface.

---

## ✨ Features

* 🎲 **Dynamic Word Selection:** Randomly pulls animal names for every new session.
* 🎨 **Visual Feedback:** Interactive ASCII art that updates with every mistake.
* 🌈 **Colored UI:** Uses terminal colors to distinguish between wins, losses, and warnings.
* 📊 **Status Tracking:** Real-time display of incorrect guesses and remaining chances.
* 🔄 **Replayability:** Option to restart the game immediately after a win or loss.

---

## 🧠 Concepts Practiced

Building this project helped solidify several core C++ pillars:

* **Logic Flow:** Mastering `while` loops for the game engine and `if/else` for win/loss conditions.
* **Data Handling:** Using **Arrays** and **Strings** to store word lists and track player progress.
* **Randomization:** Implementing `rand()` and `srand(time(0))` for non-repetitive gameplay.
* **System Integration:** Utilizing `<windows.h>` for console manipulation and screen clearing (`system("cls")`).

---

## 🛠️ Technologies Used

* **Language:** C++
* **Headers:** * `<iostream>`: Standard Input/Output.
    * `<ctime>`: Time seeding for random numbers.
    * `<windows.h>`: Console colors and system commands.
    * `<string>`: Word and character manipulation.

---

## ▶️ How to Run

### Prerequisites
* A C++ compiler (e.g., GCC/MinGW)
* Windows OS (required for `<windows.h>` features)

### Installation
1. **Clone the repository**
   ```bash
   git clone [https://github.com/your-username/hangman-cpp-game.git](https://github.com/your-username/hangman-cpp-game.git)

Navigate to the project folder and run in Dev or Vs Code
