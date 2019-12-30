/* Source.cpp
* TicTacToe game
* Author: Jason Goldenberg
* Version 1.0 Finished
* Started: December 29, 2019
* To-Do: incorporate a gamemode to play against the computer and do some input validaiton
*/


#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


void printTable(vector<char> one, vector<char> two, vector<char> three)
{
	cout << "    a     b     c  " << endl;
	cout << "       |     |     " << endl;
	cout << " 1  "<<one[0]<<"  |  " << one[1] << "  |  " << one[2] << "  " << endl;
	cout << "  _____|_____|_____" << endl;
	cout << "       |     |     " << endl;
	cout << " 2  " << two[0] << "  |  " << two[1] << "  |  " << two[2] << "  " << endl;
	cout << "  _____|_____|_____" << endl;
	cout << "       |     |     " << endl;
	cout << " 3  " << three[0] << "  |  " << three[1] << "  |  " << three[2] << "  " << endl;
	cout << "       |     |     " << endl;
}

void checkForWin(vector<char> one, vector<char> two, vector<char> three)
{
	//Checking for horizontal wins for X
	if (one[0] == 'X' && one[1] == 'X' && one[2] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (two[0] == 'X' && two[1] == 'X' && two[2] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (three[0] == 'X' && three[1] == 'X' && three[2] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	//End of checking for horizontal wins for X

	//Checking for verticle wins for X
	if (one[0] == 'X' && two[0] == 'X' && three[0] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (one[1] == 'X' && two[1] == 'X' && three[1] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (one[2] == 'X' && two[2] == 'X' && three[2] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	//End of checking for verticle wins for X

	//Checking for diagonal wins for X
	if (one[0] == 'X' && two[1] == 'X' && three[2] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (one[2] == 'X' && two[1] == 'X' && three[0] == 'X')
	{
		cout << "X WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}

	//---------------------------------------------------------------------------------------------------------

	//Checking for horizontal wins for O
	if (one[0] == 'O' && one[1] == 'O' && one[2] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (two[0] == 'O' && two[1] == 'O' && two[2] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (three[0] == 'O' && three[1] == 'O' && three[2] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	//End of checking for horizontal wins for O

	//Checking for verticle wins for O
	if (one[0] == 'O' && two[0] == 'O' && three[0] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (one[1] == 'O' && two[1] == 'O' && three[1] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (one[2] == 'O' && two[2] == 'O' && three[2] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	//End of checking for verticle wins for O

	//Checking for diagonal wins for O
	if (one[0] == 'O' && two[1] == 'O' && three[2] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}
	if (one[2] == 'O' && two[1] == 'O' && three[0] == 'O')
	{
		cout << "O WINS! CONGRATS!" << endl;
		EXIT_SUCCESS;
	}

	//End of checking for diagonal wins for O


}

void WelcomeScreen()
{
	cout << "********************" << endl;
	cout << " Welcome to Jason's " << endl;
	cout << "   TicTacToe game!  " << endl;
	cout << "********************" << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Press Enter to continue!" << endl;
	getchar();
	system("CLS");
	
}

int main()
{
	WelcomeScreen();

	//3 vectors to hold each row in tictactoe board
	vector<char> one;
	vector<char> two;
	vector<char> three;

	int number = 0;
	char letter = ' ';

	bool endGame = false;

	one.push_back('-');
	one.push_back('-');
	one.push_back('-');

	two.push_back('-');
	two.push_back('-');
	two.push_back('-');

	three.push_back('-');
	three.push_back('-');
	three.push_back('-');



	while (endGame != true)
	{


		printTable(one, two, three);
		checkForWin(one, two, three);
		


		cout << "Player one, pick you coordinates! " << endl;
		cout << "Input number 1 to 3 " << endl;
		
		cin >> number;

		cout << "Pick letter A to C " << endl;

		cin >> letter;


		if (number == 1)
		{
			if (letter == 'A' || letter == 'a')
			{
				one[0] = 'X';
			}
			if (letter == 'B' || letter == 'b')
			{
				one[1] = 'X';
			}
			if (letter == 'C' || letter == 'c')
			{
				one[2] = 'X';
			}
		}
		if (number == 2)
		{
			if (letter == 'A' || letter == 'a')
			{
				two[0] = 'X';
			}
			if (letter == 'B' || letter == 'b')
			{
				two[1] = 'X';
			}
			if (letter == 'C' || letter == 'c')
			{
				two[2] = 'X';
			}
		}
		if (number == 3)
		{
			if (letter == 'A' || letter == 'a')
			{
				three[0] = 'X';
			}
			if (letter == 'B' || letter == 'b')
			{
				three[1] = 'X';
			}
			if (letter == 'C' || letter == 'c')
			{
				three[2] = 'X';
			}
		}

		printTable(one, two, three);
		checkForWin(one, two, three);

		number = 0;
		letter = ' ';

		cout << "Player two, pick you coordinates! " << endl;
		cout << "Input number 1 to 3 " << endl;

		cin >> number;

		cout << "Pick letter A to C " << endl;

		cin >> letter;


		if (number == 1)
		{
			if (letter == 'A' || letter == 'a')
			{
				one[0] = 'O';
			}
			if (letter == 'B' || letter == 'b')
			{
				one[1] = 'O';
			}
			if (letter == 'C' || letter == 'c')
			{
				one[2] = 'O';
			}
		}
		if (number == 2)
		{
			if (letter == 'A' || letter == 'a')
			{
				two[0] = 'O';
			}
			if (letter == 'B' || letter == 'b')
			{
				two[1] = 'O';
			}
			if (letter == 'C' || letter == 'c')
			{
				two[2] = 'O';
			}
		}
		if (number == 3)
		{
			if (letter == 'A' || letter == 'a')
			{
				three[0] = 'O';
			}
			if (letter == 'B' || letter == 'b')
			{
				three[1] = 'O';
			}
			if (letter == 'C' || letter == 'c')
			{
				three[2] = 'O';
			}
		}

		




	}

	
}