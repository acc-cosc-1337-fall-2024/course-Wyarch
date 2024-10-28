#include "tic_tac_toe.h"

int main() 
{
	int userSelection;
	int position;
	bool exitFlag;
	bool continueFlag;
	string firstPlayer;
	TicTacToe game;

	do
	{
		exitFlag = false;
		cout<<"Enter first player: ";
		cin>>firstPlayer;
		
		game.start_game(firstPlayer);
		game.display_board();

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}



		do
		{
			cout<<"Play again?\n1. Yes\n2. No\n";
			cin>>userSelection;

			if(userSelection > 2 || userSelection < 1)
			{
				cout<<"Invalid input. Please Enter an integer from 1 - 2.\n";
			}
			else if(userSelection == 2)
			{
				exitFlag = true;
				cout<<"Exiting game...\n";
			}
			else
			{
				continueFlag = true;
			}
		}while(exitFlag != true && continueFlag != true);

	}while(exitFlag != true);
	
	return 0;
}