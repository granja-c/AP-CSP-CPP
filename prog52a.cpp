#include <iostream>
using namespace std;

int main() {
  int len, wid, area, perim;
  cout << "Enter the length: ";
  cin >> len;
  cout << "Enter the width: ";
  cin >> wid;
  area = len * wid;
  perim = wid * 2 + len * 2;

  cout << "The area is: " << area << endl;
  cout << "The perimeter is: " << perim << endl;

  return 0;
}