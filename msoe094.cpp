#include <iostream>
#include <math.h>
using namespace std;

double f(double x) {
  static const double pi = atan(1.0)*4.0;
  return exp(-x*x/2)/sqrt(2*pi);
}

int main() {
  double a, b, n, h, res;
  cout << "A: ";
  cin >> a;
  cout << "B: ";
  cin >> b;
  cout << "N: ";
  cin >> n;
  h = (b - a) / n;
  res = h * f(a) + f(a + h) + f(a + 2 * h) + f(a + 3 * h);

  cout << res;
}