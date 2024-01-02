// Operators in C++
// Author: Sneh Kr
// Date: 2024-01-02

#include <iostream>
using namespace std;

int main()
{
  // Arithmetic Operators
  int a = 10, b = 20;
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;
  cout << "a % b = " << a % b << endl;

  // Relational Operators
  cout << "a == b = " << (a == b) << endl;
  cout << "a != b = " << (a != b) << endl;
  cout << "a > b = " << (a > b) << endl;
  cout << "a < b = " << (a < b) << endl;
  cout << "a >= b = " << (a >= b) << endl;
  cout << "a <= b = " << (a <= b) << endl;

  // Logical Operators
  bool c = true, d = false;
  cout << "c && d = " << (c && d) << endl;
  cout << "c || d = " << (c || d) << endl;
  cout << "!c = " << (!c) << endl;
  cout << "!d = " << (!d) << endl;

  // Increment and Decrement Operators
  int e = 10;
  cout << "e = " << e << endl;
  cout << "e++ = " << e++ << endl;
  cout << "e = " << e << endl;
  cout << "++e = " << ++e << endl;
  cout << "e = " << e << endl;
  cout << "e-- = " << e-- << endl;
  cout << "e = " << e << endl;
  cout << "--e = " << --e << endl;
  cout << "e = " << e << endl;

  // Assignment Operators
  int f = 10;
  cout << "f = " << f << endl;
  f += 10;
  cout << "f += 10 = " << f << endl;
  f -= 10;
  cout << "f -= 10 = " << f << endl;
  f *= 10;
  cout << "f *= 10 = " << f << endl;

  // Ternary Operator
  int g = 10, h = 20;
  cout << "g = " << g << endl;
  cout << "h = " << h << endl;
  cout << "g > h ? g : h = " << (g > h ? g : h) << endl;
  cout << "g < h ? g : h = " << (g < h ? g : h) << endl;

  return 0;
}