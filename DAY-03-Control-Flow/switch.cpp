#include <iostream>
using namespace std;

int main()
{
  char grade;

  cout << "Enter your grade (A, B, C, D, or F): ";
  cin >> grade;

  // Switch statement to determine the grade level
  switch (grade)
  {
  case 'A':
  case 'a':
    cout << "Excellent! You have an A grade." << endl;
    break;
  case 'B':
  case 'b':
    cout << "Good job! You have a B grade." << endl;
    break;
  case 'C':
  case 'c':
    cout << "You passed with a C grade." << endl;
    break;
  case 'D':
  case 'd':
    cout << "You have a D grade. Consider improvement." << endl;
    break;
  case 'F':
  case 'f':
    cout << "Unfortunately, you failed with an F grade." << endl;
    break;
  default:
    cout << "Invalid grade entered." << endl;
  }

  return 0;
}
