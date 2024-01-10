#include <iostream>

using namespace std;

int add(int a, int b)
{
  return a + b;
}

double add(double a, double b)
{
  return a + b;
}

int main()
{
  cout << add(5, 10) << endl;    // Calls int version
  cout << add(3.5, 7.2) << endl; // Calls double version

  return 0;
}