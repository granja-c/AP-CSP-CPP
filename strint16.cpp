#include <iostream>
using namespace std;

int main() {
  string a = "";
  string b = "";
  bool c = false;
  cout << "Enter a string: ";
  cin >> a;
  cout << "Enter another string: ";
  cin >> b;
  for (int lcv = 0; lcv+b.length() < a.length(); lcv++){
    if (a.substr(lcv, b.length()) == b){
      c = true;
    }
  }
  if (c) {
    cout << a << " does contain " << b;
  } else {
    cout << a << " does not contain " << b;
  }
  
}