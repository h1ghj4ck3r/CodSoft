#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayBoard(const vector<vector<string>> &board) {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << char('A' + i) << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(const vector<vector<string>> &board, string player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

bool checkDraw(const vector<vector<string>> &board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != "X" && board[i][j] != "O") {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<string>> board(3, vector<string>(3, " "));
    string currentPlayer = "X";
    bool gameWon = false;
    bool gameDraw = false;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    do {
        displayBoard(board);

        cout << "Player " << currentPlayer << ", enter your move (e.g., A1): ";
        string move;
        cin >> move;

        int row = move[0] - 'A';
        int col = move[1] - '1';

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == " ") {
            board[row][col] = currentPlayer;
            gameWon = checkWin(board, currentPlayer);
            gameDraw = checkDraw(board);
            if (!gameWon) {
                currentPlayer = (currentPlayer == "X") ? "O" : "X";
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }

    } while (!gameWon && !gameDraw);

    displayBoard(board);

    if (gameWon) {
        cout << "Player " << currentPlayer << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
