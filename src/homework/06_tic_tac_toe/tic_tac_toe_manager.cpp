//cpp
#include "tic_tac_toe_manager.h"

//Public
void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game);
    update_winner_count(game.get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{   
    o = o_wins;
    x = x_wins;
    t = ties;
}

//Private
void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_wins += 1;
    }
    else if(winner == "O")
    {
        o_wins += 1;
    }
    else
    {
        ties += 1;
    }
}