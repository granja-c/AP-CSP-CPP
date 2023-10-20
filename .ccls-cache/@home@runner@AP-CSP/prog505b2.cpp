#include <iostream>
#include <fstream>
using namespace std;

double average(int a, int b, int c, int d, int e) {
  return (a + b + c + d + e) / 5.0;
}
string letGrade(double g) {
  if (g >= 90) return "A";
  else if (g >= 80) return "B";
  else if (g >= 70) return "C";
  else if (g >= 60) return "D";
  else return "F";
}
int main() {
  fstream f;
  f.open("data/prog505b.dat", ios::in);
  if (!f) {
    cout << "Error" << endl;
  }
  else {
    string fn, ln, let;
    int g1, g2, g3, g4, g5, ac, bc, cc, dc, fc;
    double avg, t1, t2, t3, t4, t5;
    
    while (f >> fn >> ln >> g1 >> g2 >> g3 >> g4 >> g5) {
      t1 += g1;
      t2 += g2;
      t3 += g3;
      t4 += g4;
      t5 += g5;
      avg = average(g1, g2, g3, g4, g5);
      let = letGrade(avg);
      if (let == "A") ac++;
      else if (let == "B") bc++;
      else if (let == "C") cc++;
      else if (let == "D") dc++;
      else if (let == "F") fc++;
      cout << fn << " " << ln << "\t" << g1 << "\t" << g2 << "\t" << g3 << "\t" << g4 << "\t" << g5 << "\t" << avg << "\t" << let << endl;
    }
    cout << "Test 1\t" << (t1/3) << "\tA" << ac << endl;
    cout << "Test 2\t" << (t2/3) << "\tB" << bc << endl;
    cout << "Test 3\t" << (t3/3) << "\tC" << cc << endl;
    cout << "Test 4\t" << (t4/3) << "\tD" << dc << endl;
    cout << "Test 5\t" << (t5/3) << "\tF" << fc << endl;
    
    f.close();
  }
}