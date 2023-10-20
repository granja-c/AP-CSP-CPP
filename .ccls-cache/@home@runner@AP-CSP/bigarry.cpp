#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> lst{};
  for (int lcv = 0; lcv <= 19; lcv++){
    int x = rand() % 90 + 20;
    lst.push_back(x);
  }
  for (auto lcv : lst){
    cout << lcv << " ";
  }
  cout << "Hello World!\n";
}