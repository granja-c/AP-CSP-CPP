#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double a6 = -0.09;
double a5 = 1.6108;
double a4 = -10.9167;
double a3 = 34.7625;
double a2 = -52.0433;
double a1 = 31.1767;
double a0 = -4;

double f(double x) {
  double res = a6 * pow(x, 6) + a5 * pow(x, 5) + a4 * pow(x, 4) + a3 * pow(x, 3) + a2 * pow(x, 2) + a1 * x + a0;
  return res;
}
double fprime(double x) {
  double res = 6 * a6 * pow(x, 5) + 5 * a5 * pow(x, 4) + 4 * a4 * pow(x, 3) + 3 * a3 * pow(x, 2) + 2 * a2 * x + a1;
  return res;
}

int main() {
  double y = 0.0;
  double x = 0.0;
  cout << "Initial guess: ";
  cin >> x;
  y = f(x);
  cout << "Initial position: f(" << x << ") = " << y << endl;
  while (abs(y) > 0.001) {
    x = x - f(x) / fprime(x);
    y = f(x);
    cout << "Refined zero: f(" << x << ") = " << y << endl;
  }
}