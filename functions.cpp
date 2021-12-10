#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

string start() {
	cout << "Welcome to Dog Walk by: Mya" << endl;
	cout << "Type start to start game" << endl;
	while (inputStart != "start") {
		cin >> inputStart;
		if (inputStart == "start") {
			cout << "Thanks, game will start now" << endl;
			return inputStart;
		}
		else {
			cout << "Please type start" << endl;
		}
	}
}

void choiceOne() {
	cout << "There was a dog roaming around the city. She came upon traffic and was stuck with making a quick decision " << endl;
	cout << "Type stay to stay in place or type run to run forward" << endl;
}

void choiceTwo() {
	cout << " She safely crossed through traffic but is now facing lava!!" << endl;
	cout << "Type jump to jump on a rock and move forward or type stay to play it safe" << endl;
}

string win() {
	cout << "You win, you saved the dog. Congrats!" << endl;
	cout << "Type quit to quit game" << endl;
	cin >> gameWin;
	if (gameWin == "quit") {
		return gameWin;
	}
	else {
		return gameWin;
	}
}

string lose() {
	cout << "Game over, you lose" << endl;
	cout << "Type quit to quit game" << endl;
	cin >> gameLose;
	if (gameLose == "quit") {
		return gameLose;
	}
	else {
		return gameLose;
	}
}

string game() {
	start();
	choiceOne();
	while (inputChoiceOne != "stay" || inputChoiceOne != "run") {
		cin >> inputChoiceOne;
		if (inputChoiceOne == "stay") {
			lose();
			return gameLose;
		}
		if (inputChoiceOne == "run") {
			cout << "You continue\n";
			break;
		}
		else {
			lose();
			return gameLose;
		}
	}
	choiceTwo();
	while (inputChoiceTwo != "stay" || inputChoiceTwo != "jump") {
		cin >> inputChoiceTwo;
		if (inputChoiceTwo == "stay") {
			lose();
			return gameLose;
		}
		if (inputChoiceTwo == "jump") {
			win();
			return gameWin;
		}
		else {
			lose();
			return gameLose;
		}
	}
	return game();
}
