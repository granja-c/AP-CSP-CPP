#include <iostream>
#include <stdio.h>
#include <time.h>
#include <iterator>
using namespace std;

int main() {
  int lst[20];
  srand((unsigned) time(NULL));
  for (int lcv = 0; lcv < 19; lcv++){
    int x = rand() % 70 + 20;
    lst[lcv] = x;
  }
  // 1. print list
  copy(lst, lst+20, ostream_iterator<int>(cout, " "));
  cout << endl;

  //2. print w for each
  for (int item : lst){
    cout << item << " ";
  }
  cout << endl;
  
  // 3. get middle
  int mid = lst[9];
  cout << "Middle number: " << mid << endl;
  
  // 4. avg of first mid last
  double avg = (lst[0] + mid + lst[18]) / 3.0;
  cout << "First, middle, last average: " << avg << endl;
  
  // 5. get max min
  int min = lst[0];
  int min_ind = 0;
  int max = lst[0];
  int max_ind = 0;
  for (int i = 0; i < 19; i++) {
    if (lst[i] > max){
      max = lst[i];
      max_ind = i;
    } else if (lst[i] < min) {
      min = lst[i];
      min_ind = i;
    }
  }
  cout << "Max: " << max << " Min: " << min << endl;
  
  // 6. switch max min
  int temp = min;
  lst[min_ind] = lst[max_ind];
  lst[max_ind] = temp;
  for (int item : lst) {
    cout << item << " ";
  }
  cout << endl;

  //7. insert new num
  int a = lst[9];
  int b = 0;
  lst[9] = rand() % 70 + 20;
  for (int i = 10; i < 20; i++) {
    b = lst[i];
    lst[i] = a;
    a = b;
  }
  for (int item : lst) {
    cout << item << " ";
  }
  cout << endl;
  
  //8. add 10
  for (int i = 0; i < 20; i++) {
    lst[i] += 10;
  }
  for (int item : lst) {
    cout << item << " ";
  }
  cout << endl;

  //9. replace lst[2] w 5 and print og
  cout << lst[2] << endl;
  lst[2] = 5;
  for (int item : lst) {
    cout << item << " ";
  }
  cout << endl;
  
  // 10. nums in the 50s
  cout << "Numbers in the 50s: ";
  for (int item : lst) {
    if (item >= 50 && item <= 59) {
      cout << item << " ";
    }
  }
  cout << endl;

  //11. multiples of 4
  cout << "Multiples of 4: ";
  for (int item : lst) {
    if (item % 4 == 0) {
      cout << item << " ";
    }
  }
  cout << endl;
  
  //12.is there a 60
  cout << "Is there a 60? ";
  string is60 = "No";
  for (int item : lst) {
    if (item == 60) {
      is60 = "Yes";
    }
  }
  cout << is60 << endl;

  //13. palindrome
  cout << "Is the list the same back to front? "; 
  string isPd = "Yes";
  for (int i = 0; i < 9; i++) {
    if (lst[i] != lst[-(i+1)]) {
      isPd = "No";
    }
  }
  cout << isPd << endl;
  
  //14. above average + 18. sum
  int sum = 0;
  double average = 0;
  int avgCount = 0;
  for (int item : lst) {
    sum += item;
  }
  average = sum / 20.0;
  for (int item : lst) {
    avgCount++;
  }
  cout << "Above average numbers: " << avgCount << endl;

  //15. even
  int evenCount = 0;
  for (int item : lst) {
    if (item > average) evenCount++;
  }
  cout << "Even numbers: " << evenCount << endl;
  
  //16. reverse
  int nlst[20];
  int t = 0;
  for (int i = 0; i < 20; i++) {
    t = lst[i];
    nlst[i] = lst[20-i-1];
    lst[20-i-1] = t;
  }
  for (int item : nlst) {
    cout << item << " ";
  }
  cout << endl;

  //17. shift
  int c = nlst[19];
  int d = 0;
  for (int i = 0; i < 20; i++) {
    d = nlst[i];
    nlst[i] = c;
    c = d;
  }
  for (int item : nlst) {
    cout << item << " ";
  }
  cout << endl;
  
  // 18. sum
  cout << "Sum of all the elements: " << sum << endl;
}