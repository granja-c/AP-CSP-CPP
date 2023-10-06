#include <iostream>
using namespace std;

int main() {
  string s = "";
  string t = "";
  string srch = "";
  int count = 0;
  cout << "Enter a string: ";
  cin >> s;
  cout << "Enter a target string: ";
  cin >> t;
  
  int i = 0;
  while (i < s.length()- (t.length()-1)){
    srch = s.substr(i, t.length());
    if (srch == t){
      count++;
    }
    i++;
  }
  cout << t << " occurs in " << s << " " << count << " times" << endl;
}