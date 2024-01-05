#include <iostream>
using namespace std;

class MyClass
{
private:
  int instanceVariable;

public:
  // Instance member function
  void setInstanceVariable(int value)
  {
    instanceVariable = value;
  }

  // Another instance member function
  int getInstanceVariable() const
  {
    return instanceVariable;
  }

  // Static member function
  static void staticFunction()
  {
    cout << "This is a static member function." << endl;
  }
};

int main()
{
  // Creating an instance of MyClass
  MyClass myObject;

  // Using instance member functions
  myObject.setInstanceVariable(42);
  cout << "Instance variable value: " << myObject.getInstanceVariable() << endl;

  // Using static member function
  MyClass::staticFunction();

  return 0;
}
