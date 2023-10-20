#include <iostream>
#include <list>
#include <time.h>
#include <iterator>
using namespace std;

int main() {
  cout << "Hello World!\n";
  list<int> lst;
  srand((unsigned) time(NULL));
  for (int lcv = 0; lcv < 19; lcv++){
    int x = rand() % 70 + 20;
    lst.push_back(x);
  }
  
  //2. print w for each
  for (int item : lst){
    cout << item << " ";
  }
  
  // 3. get middle
  auto mid = lst.begin();
  advance(mid, 9);
  
  // 4. avg of first mid last
  double avg = (lst.front() + *mid + lst.back()) / 3.0;
  
  // 5. get max min
  int min = *lst.begin();
  int min_ind = 0;
  int max = *lst.begin();
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
  
  
  cout << "\n" << *mid << "\n" << avg << "\n" << min << "\n" << max << endl;
}