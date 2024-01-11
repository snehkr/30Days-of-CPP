#include <iostream>

using namespace std;

// Procedural encapsulation using a static class
class MathOperations
{
public:
  static int add(int a, int b)
  {
    return a + b;
  }

  static int subtract(int a, int b)
  {
    return a - b;
  }

  static int multiply(int a, int b)
  {
    return a * b;
  }

  static double divide(double a, double b)
  {
    if (b != 0)
    {
      return a / b;
    }
    else
    {
      cerr << "Cannot divide by zero." << endl;
      return 0.0; // Default value for error case
    }
  }
};

int main()
{
  // Using static member functions of the MathOperations class
  int sum = MathOperations::add(10, 5);
  int difference = MathOperations::subtract(10, 5);
  int product = MathOperations::multiply(10, 5);
  double quotient = MathOperations::divide(10.0, 5.0);

  // Displaying results
  cout << "Sum: " << sum << endl;
  cout << "Difference: " << difference << endl;
  cout << "Product: " << product << endl;
  cout << "Quotient: " << quotient << endl;

  return 0;
}
