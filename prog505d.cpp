#include <iostream>
#include <fstream>
using namespace std;

 double average(double h, int b) {
   return h/b;
 }
int main() {
  fstream f;
  f.open("data/prog505d.txt", ios::in);
  if (!f) {
    cout << "Error" << endl;
  }
  else {
    string fn, ln;
    int b1, b2, b3, b4, b5, b6, b7;
    double h1, h2, h3, h4, h5, h6, h7;
    int tothit, mb, tb, wb, thb, fb, sab, sb;
    double mh, th, wh, thh, fh, sah, sh;

    mh = 0;
    th = 0;
    wh = 0;
    thh = 0;
    fh = 0;
    sah = 0;
    sh = 0;
    mb = 0;
    tb = 0;
    wb = 0;
    thb = 0;
    fb = 0;
    sab = 0;
    sb = 0;
    tothit = 0;
    
    while (f >> fn >> ln >> h1 >> b1 >> h2 >> b2 >> h3 >> b3 >> h4 >> b4 >> h5 >> b5 >> h6 >> b6 >> h7 >> b7) {
      cout << fn << " " << ln << "\t" << average(h1, b1) << "\t" << average(h2, b2) << "\t" << average(h3, b3) << "\t" << average(h4, b4) << "\t" << average(h5, b5) << "\t" << average(h6, b6) << "\t" << average(h7, b7) << endl;

      
      mh += h1;
      th += h2;
      wh += h3;
      thh += h4;
      fh += h5;
      sah += h6;
      sh += h7;
      mb += b1;
      tb += b2;
      wb += b3;
      thb += b4;
      fb += b5;
      sab += b6;
      sb += b7;
    }
    
    tothit += mh + th + wh + thh + fh + sah + sh;
    cout << "Monday " << average(mh, mb) << "\nTuesday " << average(th, tb) << "\nWednesday " << average(wh, wb) << "\nThursday " << average(thh, thb) << "\nFriday " << average(fh, fb) << "\nSaturday " << average(sah, sab) << "\nSunday " << average(sh, sb) << "\nTotal Hits " << tothit << endl;
    f.close();
  }
}