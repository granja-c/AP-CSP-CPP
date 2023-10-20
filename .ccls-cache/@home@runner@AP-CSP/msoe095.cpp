#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n == 0 || n == 1) return false;
  for (int i = 2; i < n; i++) {
    if ((n % i == 0)) {
      return false;
      break;
    }
  }
  return true;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (isPrime(num)) cout << "Prime" << endl;
  else cout << "Not prime" << endl;
}