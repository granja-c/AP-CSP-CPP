#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int romanNum(char s) {
  if (s == 'I') {
      return 1;
    } else if (s == 'V') {
      return 5;
    } else if (s == 'X') {
      return 10;
    } else if (s == 'L') {
      return 50;
    } else if (s == 'C') {
      return 100;
    } else if (s == 'D') {
      return 500;
    } else if (s == 'M') {
      return 1000;
    }
  return 0;
}

int main() {
  int cn, nn, tot;
  string str;
  cout << "Enter the roman numerals: ";
  cin >> str;

  for (int lcv = 0; lcv < str.length(); lcv++) {
    cn = romanNum(str[lcv]);
    if (lcv + 1 < str.length()){
      nn = romanNum(str[lcv+1]);
      if (cn < nn) {
        tot = tot + (nn - cn);
        lcv++;
      } else {
        tot += cn;
      }
    } else {
      tot += cn;
    }
  }
  cout << tot-1 << endl;
}