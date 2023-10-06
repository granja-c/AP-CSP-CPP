#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, tot;
  cout << "Number: ";
  cin >> a;
  tot = 1;
  for (int lcv = 2; lcv < a; lcv++){
    b = __gcd(a, lcv);
    if (b == 1) {
      tot++;
    }
  }
  cout << tot;
}