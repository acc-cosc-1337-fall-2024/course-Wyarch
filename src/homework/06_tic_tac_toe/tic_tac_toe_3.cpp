#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe::check_column_win()
{
    for(int i = 0; i < 3; i+=1)
    {
        if(spots[i] == "X" && spots[i+3] == "X" && spots[i+6] == "X")
        {
            return true;
        }
        else if(spots[i] == "O" && spots[i+3] == "O" && spots[i+6] == "O")
        {
            return true;
        }
    }
    
    return false;
}



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe::check_row_win()
{
    for(int i = 0; i < 9; i+=3)
    {
        if(spots[i] == "X" && spots[i+1] == "X" && spots[i+2] == "X")
        {
            return true;
        }
        else if(spots[i] == "O" && spots[i+1] == "O" && spots[i+2] == "O")
        {
            return true;
        }
    }

    return false;
}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

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