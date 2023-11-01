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
  }
  return false;
}

int main() {
  int pchoice;
  int cchoice;
  srand((unsigned) time(NULL));
  bool done = false;
  string board = "0 | 1 | 2\n---------\n3 | 4 | 5\n---------\n6 | 7 | 8";
  int spaces[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  cout << board << endl;
  while (!done) {
    cout << "Enter a space you'd like to take: ";
    cin >> pchoice;

    while (marks[pchoice] == "X" || marks[pchoice] == "O") {
      cout << "Please enter a valid choice: ";
      cin >> pchoice;
    } 
    marks[pchoice] = "X";
    for (string i : marks) {
      cout << i << " ";
    }
    cout << endl;

    cchoice = rand() % 9;
    while (marks[cchoice] == "X" || marks[cchoice] == "O") {
      cchoice = rand() % 9;
    }
    marks[cchoice] = "O";

    for (string i : marks) {
      cout << i << " ";
    }
    cout << endl;
  }
}