//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string; using std::cout; using std::cin; using std::vector;

class TicTacToe
{
public:

    bool game_over();
    void start_game(string firstPlayer);
    void mark_board(int position);
    string get_player() const{return player;}
    string get_winner() const{return winner;}
    void const display_board();

private:

    string player;
    string winner;
    vector<string> spots{9, " "};
    void clear_board();
    void set_next_player();
    void set_winner();
    bool check_board_full();
    bool check_diagonal_win();
    bool check_row_win();
    bool check_column_win();
};

#endif