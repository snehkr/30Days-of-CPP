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

int main()
{
  Dog myDog;
  myDog.speak(); // Inherited from Animal class
  myDog.bark();
  return 0;
}
