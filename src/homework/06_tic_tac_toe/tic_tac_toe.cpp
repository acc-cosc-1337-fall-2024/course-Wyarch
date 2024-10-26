//cpp
#include "tic_tac_toe.h"

//Public Functions
bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    spots[position - 1] = player;
    set_next_player();
}

void const TicTacToe::display_board()
{
    for(int i = 0; i < spots.size(); i += 3)
    {
        cout<<spots[i]<<"|"<<spots[i+1]<<"|"<<spots[i+2]<<"\n";
    }
}

//Private Functions
void TicTacToe::clear_board()
{
    for(auto& spot: spots)
    {
        spot = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i < spots.size(); i++)
    {
        if(spots[i] == " ")
        {
            return false;
        }
    }

    return true;
}