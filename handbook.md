<h1>Handbook on Programming in ?????</h1>

**AP Computer Science Principles 2023-2024**

Camila Granja

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->




___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running
g++ -o file_name.exe file_name.cpp && ./file_name.exe

compile and run it if it does compile





___





# 2. Data Types

|type|desc|ex|
|--|--|--|
|int|Numbers with no decimal- pos or neg, integers|5, -4, 3|
|double|Numbers with decimals|5.4, 3.2, 8.7455|
|string|Sequence of characters|"Hello", "HI!!"|
|bool|True or false|true, false|
|void|No value||




___





# 3. Console I/O
Input
```c++
cin >> var_name;
```

Output
```c++
cout << "Text!!" << var << endl;
```
```c++
#include <stdio.h>
double 3.14159;
printf("Pi rounded: %.2f");
```



___





# 4. Arithmetic Operations
|Operator|Desc|Ex.|
|--|--|--|
|+|Adds|5 + 2 = 7|
|-|Subtracts|5 - 2 = 3|
|*|Multiplies|5 * 2 = 10|
|/|Divides|5 / 2 = 2 (rounds down /w ints)|
|%|Modulus, gives the remainder|5 % 2 = 1|
|++|Increment operator, adds 1|x++|
|--|Increment operator, subtracts 1|x--|





___





# 5. Assignment Operations
|Operator|Desc|Ex.|
|--|--|--|
|=|Assigns a value|int x = 4 (x = 4)|
|+=|Var equals itself plus whatever is on the right|x += 5 (x = 9)|
|-=|Var equals itself minus whatever is on the right|x -= 2 (x = 2)|
|*=|Var equals itself times whatever is on the right|x *= 3 (x = 12)|
|/=|Var equals itself divided by whatever is on the right|x /= 2 (x = 2)|
|%=|Var equals itself mod whatever is on the right|x %= 3 (x = 1)|




___





# 6. Comments
```c++
/*
  comment
  on
  multiple
  lines
*/

// single line comment
```




___





# 7. Decision Structures
if
```c++
using namespace std;
int x = 2;
if (x < 5) {
  cout << "yes";
}
// yes
```
if/else
```c++
using namespace std;
int x = 2;
if (x < 5) {
  cout << "yes";
} else {
  cout << "no";
}
// yes
```
else if
```c++
using namespace std;
int x = 2;
if (x > 5) {
  cout << "A";
} else if (x > 1) {
  cout << "B";
} else {
  cout << "C";
}
// B
```




___





# 8. Conditional Operators
x = 2;
y = 5
|Operator|Desc|Ex.|
|--|--|--|
|<|less than|x < y|
|<=|less than or equal to|x <= y|
|>|greater than||
|>=|greater than or equal to||
|==|is equal to||
|!=|is not equal to||



___





# 9. Logic Operators
|symbol|name|
|--|--|
|&&|and|
|the two lines|or|
|!|not|



___





# 10. Advanced Decision Structures

```c++
int day = 3;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 3:
    cout << "Saturday";
    break;
  case 3:
    cout << "Sunday";
    break;
  default:
    cout << "Invalid choice." << endl;
}
```





___





# 11. String Methods
|Operator|Desc|
|--|--|
|size|Returns the length|
|compare|Compares length of strings|
|stoi|Converts to integer|
|stod|Converts to double|
|substr|Gets a substring from the original (start index, length)|
|replace|Replaces a portion of the original with a new word (start ind, length, word)|



___





# 12. Random Generation
```c++
#include <time.h>
srand((unsigned) time(NULL));
int x = rand() % 20;
//x will be a number from 0-20 (exclusive)
```





___





# 13. Looping Structures
while
```c++
int x = 5;
while (x > 0){
  cout << ":D ";
  x--;
}
//:D :D :D :D :D
```
for
```c++
for (int lcv = 0; lcv < 5; lcv++){
  cout << lcv << " ";
}
//0 1 2 3 4
```




___





# 14. Functions/Methods
```c++
double average(int a, int b, int c, int d, int e) {
  return (a + b + c + d + e) / 5.0;
```




___





# 15. Elementary Data Structures





## 15.1 Arrays/Lists
```c++
int nums[5] = {1, 2, 3, 4, 5}
for (int i: nums) {
  cout << i << " ";
}
// 1 2 3 4 5
```






## 15.2 Matrices
```c++
int nums[3][2] = {1, 2, 3, 4, 5, 6};
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 2; j++) {
    cout << nums[i][j] << "\t";
  }
  cout << endl;
}
```





___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)
