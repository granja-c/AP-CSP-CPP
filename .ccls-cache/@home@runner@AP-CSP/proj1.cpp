#include <iostream>
#include <time.h>
using namespace std;

string marks[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

bool win(string m) {
  if (marks[0] == marks[1] && marks[1] == marks[2] && marks[2] == m) {
    return true;
  } else if (marks[3] == marks[4] && marks[4] == marks[5] && marks[5] == m) {
      return true;
  } else if (marks[6] == marks[7] && marks[7] == marks[8] && marks[8] == m) {
      return true;
  } else if (marks[0] == marks[3] && marks[3] == marks[6] && marks[6] == m) {
      return true;
  } else if (marks[1] == marks[4] && marks[4] == marks[7] && marks[7] == m) {
      return true;
  } else if (marks[2] == marks[5] && marks[5] == marks[8] && marks[8] == m) {
      return true;
  } else if (marks[0] == marks[4] && marks[4] == marks[8] && marks[8] == m) {
      return true;
  } else if (marks[2] == marks[4] && marks[4] == marks[6] && marks[6] == m) {
    return true;
  }
  return false;
}

void printBoard() {
  cout << marks[0] << " | " << marks[1] << " | " << marks[2] << endl;
  cout << "---------" << endl;
  cout << marks[3] << " | " << marks[4] << " | " << marks[5] << endl;
  cout << "---------" << endl;
  cout << marks[6] << " | " << marks[7] << " | " << marks[8] << endl;
}

int main() {
  srand((unsigned) time(NULL));
  int pchoice, cchoice;
  bool pWin, cWin;
  int turns = 1;
  cout << "The board:\n0 | 1 | 2\n---------\n3 | 4 | 5\n---------\n6 | 7 | 8\nPlayer = X | Computer = O" << endl;
  
  while (turns < 9 && !pWin && !cWin) {
    cout << "Enter a space you'd like to take: ";
    cin >> pchoice;
    while (marks[pchoice] == "X" || marks[pchoice] == "O") {
      cout << "Please enter a valid choice: ";
      cin >> pchoice;
    } 
    marks[pchoice] = "X";
    turns++;
    
    cchoice = rand() % 9;
    while (marks[cchoice] == "X" || marks[cchoice] == "O") {
      cchoice = rand() % 9;
    }
    marks[cchoice] = "O";
    turns++;
    
    printBoard();
    cout << endl;
    pWin = win("X");
    cWin = win("O");
  }
  if (turns == 9) {
    cout << "Enter a space you'd like to take: ";
    cin >> pchoice;
    while (marks[pchoice] == "X" || marks[pchoice] == "O") {
      cout << "Please enter a valid choice: ";
      cin >> pchoice;
    } 
    marks[pchoice] = "X";
    printBoard();
    cout << endl;
    pWin = win("X");
    cWin = win("O");
  }
  
  if (cWin) cout << "Computer wins!" << endl;
  else if (pWin) cout << "Player wins!" << endl;
  else cout << "Draw!" << endl;
}