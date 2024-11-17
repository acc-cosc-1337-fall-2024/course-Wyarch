//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string; using std::cout; using std::cin; using std::vector;

class TicTacToe
{
protected:

    vector<string> spots;
    virtual bool check_diagonal_win();
    virtual bool check_row_win();
    virtual bool check_column_win();

public:

    TicTacToe(int size):spots(size*size," "){};
    bool game_over();
    void start_game(string firstPlayer);
    void mark_board(int position);
    string get_player() const{return player;}
    string get_winner() const{return winner;}
    void const display_board();

private:

    string player;
    string winner;
    void clear_board();
    void set_next_player();
    void set_winner();
    bool check_board_full();
};

#endif