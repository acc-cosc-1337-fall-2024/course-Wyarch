#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() 
{
	int userSelection;
	int position;
	int o,x,t;
	bool exitFlag = false;
	bool continueFlag = false;
	string firstPlayer;
	TicTacToe game(3);
	TicTacToeManager manager;

	do
	{
		exitFlag = false;
		
		do
		{
			cout<<"Enter first player: ";
			cin>>firstPlayer;

			if(firstPlayer == "X" || firstPlayer == "O")
			{
				continueFlag = true;
			}
			else
			{
				cout<<"Invalid choice. Player should be X or O.\n";
				continueFlag = false;
			}

		}while(continueFlag != true);

		game.start_game(firstPlayer);
		game.display_board();

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		//manager.save_game(game);
		manager.get_winner_total(o,x,t);
		cout<<"The Winner is: "<<game.get_winner()<<"\n";
		cout<<"The Current Win Count:\n"<<"X Wins: "<<x<<"\n"<<"O Wins: "<<o<<"\n"<<"Ties: "<<t<<"\n\n";

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