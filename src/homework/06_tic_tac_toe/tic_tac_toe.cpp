//cpp
#include "tic_tac_toe.h"

//Public Functions
bool TicTacToe::game_over()
{
    if(check_board_full() || check_diagonal_win())
    {
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

bool TicTacToe::check_diagonal_win()
{
    int count;

    for(int i = 0; i < 2; i++)
    {
        count = 0;
        if(i == 0)
        {
            for(int c = 0; c < spots.size(); c+=4)
            {
                if(spots[c] == "X")
                {
                    count++;
                }
            }
        }
        else
        {
            for(int c = 2; c < spots.size(); c+=2)
            {
                if(spots[c] == "X")
                {
                    count++;
                }
            }
        }

        if(count == 3)
        {
            return true;
        }
    }

    count = 0;

        for(int i = 0; i < 2; i++)
    {
        count = 0;
        if(i == 0)
        {
            for(int c = 0; c < spots.size(); c+=4)
            {
                if(spots[c] == "O")
                {
                    count++;
                }
            }
        }
        else
        {
            for(int c = 2; c < spots.size(); c+=2)
            {
                if(spots[c] == "O")
                {
                    count++;
                }
            }
        }

        if(count == 3)
        {
            return true;
        }
    }

    return false;

    /*for(int i = 0; i < spots.size(); i+4)
    {
        if(spots[i] == "O")
        {
            countO++;
        }
    }*/
}