#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
  int res = 0;
  for (int i = -12; i <= 16; i++){
    res = pow(i, 6) - 3 * pow(i, 5) - 93 * pow(i, 4) + 87 * pow(i, 3) + 1596 * pow(i, 2) - 1380 * i - 2800;
    printf("%d\t%d\n", i, res);
  }
}