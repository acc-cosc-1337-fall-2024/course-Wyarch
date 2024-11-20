//cpp
#include "tic_tac_toe_manager.h"
using std::make_unique;
//Public
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{   
    o = o_wins;
    x = x_wins;
    t = ties;
}

/*void TicTacToeManager::display_games()
{
    cout<<"Games List:\n";
    for(int i = 0; i < games.size(); i++)
    {
        cout<<games[i]<<"\n";
    }
}*/

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