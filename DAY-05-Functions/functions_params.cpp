#include <iostream>
using namespace std;

// Function without Parameters and Return Value
void functionWithoutParamsAndReturnValue()
{
  cout << "This is a function without parameters and return value." << endl;
}

// Function with Parameters but No Return Value
void functionWithParamsButNoReturnValue(int a, int b)
{
  cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
}

// Function with Parameters and Return Value
int functionWithParamsAndReturnValue(int x, int y)
{
  return x * y;
}

int main()
{
  // Calling the functions
  functionWithoutParamsAndReturnValue();

  int num1 = 5, num2 = 10;
  functionWithParamsButNoReturnValue(num1, num2);

  int result = functionWithParamsAndReturnValue(num1, num2);
  cout << "Product of " << num1 << " and " << num2 << " is: " << result << endl;

  return 0;
}
