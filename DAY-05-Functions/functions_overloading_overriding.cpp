#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
  // Function Overriding
  virtual void makeSound()
  {
    cout << "Animal makes a generic sound." << endl;
  }
};

// Derived class with Function Overriding
class Dog : public Animal
{
public:
  void makeSound() override
  {
    cout << "Dog barks: Woof! Woof!" << endl;
  }

  // Function Overloading
  void makeSound(int times)
  {
    for (int i = 0; i < times; ++i)
    {
      cout << "Dog barks: Woof! ";
    }
    cout << endl;
  }
};

// Function Overloading in a separate function
void makeSound(int times)
{
  for (int i = 0; i < times; ++i)
  {
    cout << "Generic animal sound. ";
  }
  cout << endl;
}

int main()
{
  Animal genericAnimal;
  Dog myDog;

  // Function Overriding
  genericAnimal.makeSound();
  myDog.makeSound();

  // Function Overloading
  myDog.makeSound(3);
  makeSound(2);

  return 0;
}
