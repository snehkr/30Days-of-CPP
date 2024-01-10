#include <iostream>

using namespace std;

class Complex
{
public:
  int real, imag;

  Complex operator+(const Complex &obj)
  {
    Complex temp;
    temp.real = real + obj.real;
    temp.imag = imag + obj.imag;
    return temp;
  }

  // Overload << operator to output Complex objects
  friend ostream &operator<<(ostream &os, const Complex &obj)
  {
    os << obj.real << " + " << obj.imag << "i";
    return os;
  }
};

int main()
{
  Complex c1, c2, result;

  // Initialize c1 and c2
  c1.real = 3;
  c1.imag = 5;

  c2.real = 2;
  c2.imag = 7;

  result = c1 + c2; // Calls overloaded '+' operator
  cout << "Result: " << result << endl;

  return 0;
}
