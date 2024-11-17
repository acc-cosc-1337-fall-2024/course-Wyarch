//cpp
#include "tic_tac_toe.h"

//Protected Functions
bool TicTacToe::check_diagonal_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_column_win()
{
    return false;
}

//Public Functions



bool TicTacToe::game_over()
{
    if(check_diagonal_win() || check_row_win() || check_column_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        set_winner();
        return true;
    }
    
    return false;
}

void TicTacToe::start_game(string first_player = "X")
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

void TicTacToe::set_winner()
{
    if(check_board_full() && !check_column_win() && !check_diagonal_win() && !check_row_win())
    {
        winner = "C";
    }
    else if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
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