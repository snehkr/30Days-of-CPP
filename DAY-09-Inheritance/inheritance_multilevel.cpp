#include <iostream>
using namespace std;

class Animal
{
public:
  void speak()
  {
    cout << "Animal speaks" << endl;
  }
};

class Dog : public Animal
{
public:
  void bark()
  {
    cout << "Dog barks" << endl;
  }
};

class Bulldog : public Dog
{
public:
  void guard()
  {
    cout << "Bulldog guards" << endl;
  }
};

int main()
{
  Bulldog myBulldog;
  myBulldog.speak(); // Inherited from Animal class
  myBulldog.bark();  // Inherited from Dog class
  myBulldog.guard();
  return 0;
}
