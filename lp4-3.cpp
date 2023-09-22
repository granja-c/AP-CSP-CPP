#include <iostream>
using namespace std;

int main() {
  int egg, doz, ext;
  double price, tot;
  cout << "Enter the # of eggs: ";
  cin >> egg;

  if (egg < 48){
    price = 0.5;
  } else if (egg >= 48 && egg < 72){
    price = 0.45;
  } else if (egg >= 72 && egg < 136){
    price = 0.4;
  } else {
    price = 0.35;
  }
  doz = egg / 12;
  ext = egg % 12;
  tot = doz * price + ext * (price / 12);
  cout << "The total is: $" << tot << endl;
}