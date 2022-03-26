// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Board.h"


using namespace std;

int main()
{
    Board brd;
    char board[9][9] = { { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
                        { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
                        { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
                        { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
                        { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
                        { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
                        { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
                        { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
                        { '.', '.', '.', '.', '8', '.', '.', '7', '9' } };

    cout << (brd.isValidConfig(board, 9) ? "Percobaan Validasi Board : Berhasil" : "Percobaan Validasi Board : Gagal\n");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
