🕹️ Hangman Console Game (C++)

This project is a simple Hangman-style console game developed in C++.
It was created during my 1st semester as a side project to practice fundamental programming concepts and improve my understanding of basic C++ logic, loops, conditions, and user interaction.

The main goal of this project was learning by building — experimenting with console graphics, random number generation, and interactive gameplay in a terminal environment.

📖 Project Overview

The game selects a random animal name and hides it using placeholder characters (X).
The player must guess the correct letters to reveal the hidden word before running out of chances.

Each incorrect guess reduces the remaining chances, while correct guesses reveal the letters in the word. If all chances are used, the character is hanged and the game ends.

To make the game more engaging, the program includes:

ASCII-style console graphics

Colored terminal output

Random word selection

Tracking of incorrect guesses

Option to replay the game

✨ Features

Randomly selected hidden word

Interactive character guessing

ASCII art game visuals

Colored console interface

Wrong guess tracking

Replay option after the game ends

🧠 Concepts Practiced

This project helped me practice several core programming concepts, including:

C++ syntax and structure

Loops and conditional statements

String manipulation

Arrays

Random number generation (rand() and srand())

Basic console UI using ASCII art

User input and output

🛠️ Technologies Used

C++

<iostream> for input/output

<ctime> for random number generation

<windows.h> for console effects

Windows console commands (system("cls"), system("color"))

▶️ How to Run
1. Clone the repository
git clone https://github.com/your-username/hangman-cpp-game.git
2. Navigate to the project folder
cd hangman-cpp-game
3. Compile the program
g++ hangman.cpp -o hangman
4. Run the game
./hangman
📂 Project Structure
hangman-cpp-game
│
├── hangman.cpp
└── README.md
