#include <iostream>
#include <stdio.h>
#include <time.h>
#include <iterator>
using namespace std;

int main() {
  cout << "Hello World!\n";
  int lst[20];
  srand((unsigned) time(NULL));
  for (int lcv = 0; lcv < 19; lcv++){
    int x = rand() % 70 + 20;
    lst[lcv] = x;
  }
  // 1. print list
  copy(lst, lst+20, ostream_iterator<int>(cout, " "));
  
  
  //2. print w for each
  for (int item : lst){
    cout << item << " ";
  }

  // 3. get middle
  int mid = lst[9];

  // 4. avg of first mid last
  double avg = (lst[0] + mid + lst[19]) / 3.0;

  // 5. get max min
  int min = lst[0];
  int min_ind = 0;
  int max = lst[0];
  int max_ind = 0;

  int i = 0;
  for (int item : lst) {
    if (item > max){
      max = item;
      max_ind = i;
    } else if (item < min) {
      min = item;
      min_ind = i;
    }
    i++;
  }
  
  // 6. switch max min


  cout << "\n" << mid << "\n" << avg << "\n" << min << "\n" << max << endl;
}