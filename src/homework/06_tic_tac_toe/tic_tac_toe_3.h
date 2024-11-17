//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3

class TicTacToe3:TicTacToe
{
public:

    TicTacToe3():TicTacToe(3){};

private:

    bool check_diagonal_win();
    bool check_row_win();
    bool check_column_win();
    
};

#endif