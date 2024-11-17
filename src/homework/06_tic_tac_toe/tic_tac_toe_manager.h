//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string; using std::vector; using std::cout; using std::cin;

class TicTacToeManager
{
    public:

        void save_game(TicTacToe b);
        void get_winner_total(int& o, int& w, int& t);
    
    private:

        vector<TicTacToe> games = {};
        int x_wins = 0;
        int o_wins = 0;
        int ties = 0;
        void update_winner_count(string winner);
};

#endif