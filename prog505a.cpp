#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int point(int b) {
  if (b <= 3) {
    return b * 10;
  } else if (b > 3 && b <= 6) {
    return 30 + (b - 3) * 15;
  } else if (b > 6) {
    return 75 + (b - 6) * 20;
  }
  return 0;
}

int main() {
  fstream f;
  f.open("data/prog505a.dat", ios::in);
  if (!f) {
    cout << "Error" << endl;
  }
  else {
    string fn, ln, winner;
    int b, pts, avg;
    int most = 0;
    while (f >> fn >> ln >> b){
      pts = point(b);
      avg += pts;
      if (pts > most) {
        winner = fn + " " + ln;
        most = pts;
      }
      cout << fn << " " << ln << "\t" << b << "\t" << pts << endl;
    }
    cout << "Average points: " << (avg / 5) << "\nThe winner of the contest is: " << winner << endl;
    f.close();
  }
}