#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i = 0;
  int j = 0;
  cout << "Enter a number: ";
  cin >> i;
  while (i > 1) {
    if (i%2 != 0){
      j = 3 * i + 1;
      printf("%d is odd, so I make 3n + 1 = %d\n", i, j);
    }
    else {
      j = i / 2;
      printf("%d is even, so I take half = %d\n", i, j);
    }
    i = j;
  }
}