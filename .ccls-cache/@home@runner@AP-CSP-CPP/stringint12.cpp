#include <iostream>
using namespace std;

int main() {
  string og, a, wrd, res;
  cout << "Enter a string: ";
  getline (cin, og);
  og += " ";
  
  int l = og.length();
  int i = 0;
  while (i < l){
    a = og.at(i);
    if (a != " "){
      wrd += a;
    } else {
      res = wrd + " " + res;
      wrd = "";
    }
    i++;
  }
  
  cout << "The new string is: " << res << endl;
}