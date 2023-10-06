#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int l1, l2, l3;
  double v, a, res;
  cout << "L1: ";
  cin >> l1;
  cout << "L2: ";
  cin >> l2;
  cout << "L3: ";
  cin >> l3;
  cout << "V: ";
  cin >> v;
  
  a = v / l1 + v / l2 + v / l3;
  res = v / a;

  printf("The parallel resistance is: %.2f", res);
  
}