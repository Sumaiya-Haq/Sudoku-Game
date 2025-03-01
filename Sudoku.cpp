#include <iostream>
using namespace std;

void printBoard(int board[9][9], int size) 
{
    for (int i = 0; i < size; i++)
     {
        for (int j = 0; j < size; j++) 
        {
            cout << board[i][j] << " ";
            if ((j + 1) % 3 == 0 && j != size - 1)
             {
                cout << "| ";
            }
        }
        cout << endl;
        if ((i + 1) % 3 == 0 && i != size - 1)
         {
            cout << "-------------------" << endl;
        }
    }
}


int number_valid(int board[9][9], int row, int col, int num, int size) 
{
    for (int x = 0; x < size; x++)
     {
        if (board[row][x] == num || board[x][col] == num) 
        {
            return 0;
        }
    }

    int first_row = row - row % 3;
    int first_col = col - col % 3;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i + first_row][j + first_col] == num)
             {
                return 0;
            }
        }
    }
    return 1;
}

int find_empty_cell(int board[9][9], int &row, int &col, int size)
 {
    for (int i = 0; i < size; i++)
     {
        for (int j = 0; j < size; j++)
         {
            if (board[i][j] == 0) 
            { 
                row = i;
                col = j;
                return 1;
            }
        }
    }
    return 0;
}


int solveSudoku(int board[9][9], int size) 
{
    int row, col;
    if (find_empty_cell(board, row, col, size) == 0)
    {
        return 1; 
    }

    for (int num = 1; num <= size; num++) {
        if (number_valid(board, row, col, num, size) == 1)
         {
            board[row][col] = num;

            if (solveSudoku(board, size) == 1)
             {
                return 1; 
            }

            board[row][col] = 0; 
        }
    }
    return 0; 
}

int main() {
    const int size = 9;
    int board[size][size];

    cout << "Enter the Sudoku puzzle (use 0 for empty spaces):" << endl;
    for (int i = 0; i < size; i++)
     {
        for (int j = 0; j < size; j++)
         {
            cin >> board[i][j];
        }
    }

    cout << "Original Sudoku Puzzle:" << endl;
    printBoard(board, size);

    if (solveSudoku(board, size) == 1)
     {
        cout << "\nSolved Sudoku Puzzle:" << endl;
        printBoard(board, size);
    } 
    else {
        cout << "\nNo solution exists for the given Sudoku puzzle.\n";
    }

    return 0;
}
