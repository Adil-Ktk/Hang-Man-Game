
#include <iostream>
#include<windows.h>
#include <ctime>
using namespace std;

string name;

void begin() {
    cout << "\t\t\t\t" << name << ", You can save my life\n\n";
    cout << "\t\t\t\t\t__\n";
    cout << "\t\t\t\t\t             |            |\n";
    cout << "\t\t\t\t\t             o            |\n";
    cout << "\t\t\t\t\t            / \\           |           " << name << ", You can save his life \n";
    cout << "\t\t\t\t\t             |             |                  /\\\n";
    cout << "\t\t\t\t\t           /   \\           |                  o\n";
    cout << "\t\t\t\t\t     ******************    |                 / \\\n";
    cout << "\t\t\t\t\t     |                 |    |          |      |   \n";
    cout << "\t\t\t\t\t     |                 |    |       *******  /  \\\n";
    cout << "\t\t\t\t\t_||||\n";
}

void release() {
    cout << "\t\t\t\t\t__\n";
    cout << "\t\t\t\t\t                          |\n";
    cout << "\t\t\t\t\t             o            |\n";
    cout << "\t\t\t\t\t            / \\           |           " << name << ", You can saved his life.He is a free \n";
    cout << "\t\t\t\t\t             |             |                  /\\\n";
    cout << "\t\t\t\t\t           /   \\           |                  o\n";
    cout << "\t\t\t\t\t     ******************    |                 / \\\n";
    cout << "\t\t\t\t\t     |                 |    |          \\ \\    |   \n";
    cout << "\t\t\t\t\t     |                 |    |       *******  /  \\\n";
    cout << "\t\t\t\t\t_||||\n";
}

void hanged() {
    cout << "\t\t\t\t\t__\n";
    cout << "\t\t\t\t\t             |            |\n";
    cout << "\t\t\t\t\t             |            |\n";
    cout << "\t\t\t\t\t             o            |\n";
    cout << "\t\t\t\t\t            / \\           |           " << name << ", You could not  saved his life .He is hanged \n";
    cout << "\t\t\t\t\t             |             |                  /\\\n";
    cout << "\t\t\t\t\t     *****/   \\****      |                  o\n";
    cout << "\t\t\t\t\t     |                 |    |                 / \\\n";
    cout << "\t\t\t\t\t     |                 |    |          \\ \\     |   \n";
    cout << "\t\t\t\t\t     |                 |    |       *******  /  \\\n";
    cout << "\t\t\t\t\t_||||\n";
}

void correct() {
    cout << "\t\t\t\t\t__\n";
    cout << "\t\t\t\t\t             |            |\n";
    cout << "\t\t\t\t\t             o            |\n";
    cout << "\t\t\t\t\t            / \\           |           Welldone! " << name << ", Correct guess\n";
    cout << "\t\t\t\t\t             |             |                  /\\\n";
    cout << "\t\t\t\t\t           /   \\           |                  o\n";
    cout << "\t\t\t\t\t     ******************    |                 / \\\n";
    cout << "\t\t\t\t\t     |                 |    |          |      |   \n";
    cout << "\t\t\t\t\t     |                 |    |       *******  /  \\\n";
    cout << "\t\t\t\t\t_||||\n";
}

void incorrect() {
    cout << "\t\t\t\t\t__\n";
    cout << "\t\t\t\t\t             |            |\n";
    cout << "\t\t\t\t\t             o            |\n";
    cout << "\t\t\t\t\t              \\           |          OOPS! " << name <<  " ,Incorrect guess try again \n";
    cout << "\t\t\t\t\t             |             |                  /\\\n";
    cout << "\t\t\t\t\t           /   \\           |                  o\n";
    cout << "\t\t\t\t\t     ******************    |                 / \\\n";
    cout << "\t\t\t\t\t     |                 |    |          |      |   \n";
    cout << "\t\t\t\t\t     |                 |    |       *******  /  \\\n";
    cout << "\t\t\t\t\t_||||\n";
}
int main() {
    system("color f3");
    string tittle = "\t\t\t*          *       *****    *        *****        *****     *          *     *****\n"
                    "\t\t\t*          *       *        *        *            *   *     *  *     * *     *    \n"
                    "\t\t\t*     *    *       *****    *        *            *   *     *     *    *     *****\n"
                    "\t\t\t*  *    *  *       *        *        *            *   *     *          *     *    \n"
                    "\t\t\t*          *       *****    ******   *****        *****     *          *     ******\n";
    for (int i = 0; i < tittle.length(); i++) {
        Sleep(1);
        cout << tittle[i];
    }

    string name;
    start: // it is a goto statemnet 
    cout << "Enter Player name   :  ";
    getline(cin, name);
    int chances = 5;
    string array[10] = {"horse", "camel", "tiger", "lion", "cat", "yak", "fox", "donkey", "bear", "monkey"};
    srand(time(0));  //this makes random nmbrs appear diff each the program is runned ---- time(0) gets curent tym that cahnges every second so makes randomness 
    int index = rand() % 10;   //generates random nmbrs from zero to 9
    string word = array[index];
    string hide_word(word.length(), 'X'); //string(n , ch) n== nmbr of character nd ch == charater ,, so nmbr is length of string word and ch = X
    string wrong_guesses;

    cout << "Hidden word\n";
    cout << "\n";
    cout << "-------------\n";
    cout << "* " << hide_word << " *\n";
    cout << "-------------\n";
    begin();

    while (word.compare(hide_word) != 0) {  // as long as both strings are not same and retuens zero( initailly word == cat Hide_word == XXX so not same and will not return zero)
        cout << "Hint  : It is the name of Animal\n";
        cout << "Chance: " << chances << endl;

        char key;
        cout << "\t\tGuess " << name << " any Character  :";
        cin >> key;
        system("cls");

        bool found = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == key) {
                system("color f0");
                hide_word[i] = key;
                found = true;
            }
        }

        if (found) {
            system("color 2f");
            cout << "Hidden word\n";
            cout << "\n";
            cout << "-------------\n";
            cout << "* " << hide_word << " *\n";
            cout << "-------------\n";
            correct();
        } else {
            system("color e4");
            wrong_guesses += key; //the incorrect word is added or apended to empty string named wrong_guesses tht we declare above 
            wrong_guesses += ' '; // this adds a space in after incorrect word
            cout << "Hidden word\n";
            cout << "\n";
            cout << "-------------\n";
            cout << "* " << hide_word << " *\n";
            cout << "-------------\n";
            cout << "You have entered " << key << endl;
            cout << "Wrong guesses: " << wrong_guesses << endl;  // this shows yur wrong guessed letter
            incorrect();
            chances--;
        
        }

        if (chances == 0) {
            system("color 4e");
            cout << "Chances: " << chances << "!\n";
            cout << "\033[1;42m";  //ansi escape code to change background color   42m is color 1 is opacity
            cout << "\t\t\t\tG A M E O V E R!!!!!!!\t You Lost!!!!!\n";
            cout<<"\033[0m"; // sets default console colors
            cout << "\033[1;41m";
            hanged();
            cout << "\033[0m"; 
            break;
        }

      if (word.compare(hide_word) == 0) {
            std::cout << "\033[1;39m\033[1m\033[3m\033[5m\033[7m\t\t\t\tCongratulations! You Won the game...........\t\t\t\t\033[0m\n";
            cout << "\033[1;42m"; 
            release();
            cout<<"\033[0m";
            break;
        }
    }

    string ch;
     cout << "\033[1;42m"; 
          cout << "\t\t\t\t\t Do you want to play the game again? :";
            cout<<"\033[0m";
    
    cin >> ch;
    system("cls");
    if (ch == "yes" || ch == "Yes") {
        goto start;
    } else {
        cout << "\t\t\t\t\t\t GAME EXITED \n";
    }

    return 0;
}