//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string; using std::vector; using std::cout; using std::cin; using std::unique_ptr;

class TicTacToeManager
{
    public:

        void save_game(unique_ptr<TicTacToe>& b);
        void get_winner_total(int& o, int& w, int& t);
        void display_games();
    
    private:

        vector<unique_ptr<TicTacToe>> games;
        int x_wins = 0;
        int o_wins = 0;
        int ties = 0;
        void update_winner_count(string winner);
};

#endif