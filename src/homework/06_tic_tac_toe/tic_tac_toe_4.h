//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4

class TicTacToe4:TicTacToe
{
public:
    
    TicTacToe4():TicTacToe(4){};

private:

    bool check_diagonal_win();
    bool check_row_win();
    bool check_column_win();

};

#endif