#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/

bool TicTacToe::check_column_win()
{
    for(int i = 0; i < 4; i+=1)
    {
        if(spots[i] == "X" && spots[i+4] == "X" && spots[i+8] == "X" && spots[i+12] == "X")
        {
            return true;
        }
        else if(spots[i] == "O" && spots[i+4] == "O" && spots[i+8] == "O" && spots[i+12] == "O")
        {
            return true;
        }
    }
    
    return false;
}


/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

bool TicTacToe::check_row_win()
{
    for(int i = 0; i < 16; i+=4)
    {
        if(spots[i] == "X" && spots[i+1] == "X" && spots[i+2] == "X" && spots[i+3] == "X")
        {
            return true;
        }
        else if(spots[i] == "O" && spots[i+1] == "O" && spots[i+2] == "O" && spots[i+3] == "O")
        {
            return true;
        }
    }

    return false;
}

/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe::check_diagonal_win()
{
    int count;

    for(int i = 0; i < 2; i++)
    {
        count = 0;
        if(i == 0)
        {
            for(int c = 0; c < spots.size(); c+=5)
            {
                if(spots[c] == "X")
                {
                    count++;
                }
            }
        }
        else
        {
            for(int c = 2; c < spots.size(); c+=3)
            {
                if(spots[c] == "X")
                {
                    count++;
                }
            }
        }

        if(count == 4)
        {
            return true;
        }
    }

    for(int i = 0; i < 2; i++)
    {
        count = 0;
        if(i == 0)
        {
            for(int c = 0; c < spots.size(); c+=5)
            {
                if(spots[c] == "O")
                {
                    count++;
                }
            }
        }
        else
        {
            for(int c = 2; c < spots.size(); c+=3)
            {
                if(spots[c] == "O")
                {
                    count++;
                }
            }
        }

        if(count == 4)
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