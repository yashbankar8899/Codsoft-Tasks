#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentMarker;
int currentPlayer;


void displayBoard() {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}


bool checkWin() {
    
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }
    
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }
    return false;
}


bool placeMarker(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    } else {
        return false;  
    }
}


void game() {
    cout << "Player 1, choose your marker (X or O): ";
    cin >> currentMarker;
    currentPlayer = 1;

    if (currentMarker == 'X') {
        currentMarker = 'X';
    } else {
        currentMarker = 'O';
    }

    int turns = 0;
    while (true) {
        displayBoard();
        cout << "Player " << currentPlayer << "'s turn. Enter your position (1-9): ";
        int position;
        cin >> position;

        if (position < 1 || position > 9) {
            cout << "Invalid position! Try again.\n";
            continue;
        }

        if (!placeMarker(position)) {
            cout << "Position already taken! Try again.\n";
            continue;
        }

        turns++;
        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (turns == 9) {
            displayBoard();
            cout << "It's a draw!\n";
            break;
        }

        
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
        currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    }
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!\n";
    game();
    return 0;
}
