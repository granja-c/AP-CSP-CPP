#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
  int i = 1;
  int sq = 0;
  double sqrt = 0;
  int cb = 0;
  double frt = 0;

  while (i <= 20){
    sq = pow(i, 2);
    sqrt = pow(i, 0.5);
    cb = pow(i, 3);
    frt = pow(i, 0.25);
    printf("%d\t%d\t%.4f\t%d\t%.4f\n", i, sq, sqrt, cb, frt);
    i++;
  }
}