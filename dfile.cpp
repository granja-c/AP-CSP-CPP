#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream f;
  f.open("data/prog505b.dat", ios::in);
  if (!f) {
    cout << "Error" << endl;
  }
  else {
    cout << "Yup" << endl;
    f.close();
  }
}