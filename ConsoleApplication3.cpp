#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

string inputStart = "";
string inputChoiceOne = "";
string inputChoiceTwo = "";
string gameLose = "";
string gameWin = "";

int main()
{
    while (gameLose != "quit" || gameWin != "quit") {
        game();
        if (gameLose == "quit" || gameWin == "quit") {
            return 0;
        }
    }
}