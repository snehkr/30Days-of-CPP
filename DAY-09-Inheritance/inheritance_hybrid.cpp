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

class Flyable
{
public:
  void fly()
  {
    cout << "Can fly" << endl;
  }
};

class Bird : public Animal, public Flyable
{
public:
  void chirp()
  {
    cout << "Bird chirps" << endl;
  }
};

class Penguin : public Animal
{
public:
  void swim()
  {
    cout << "Penguin swims" << endl;
  }
};

class FlyingPenguin : public Bird, public Penguin
{
  // Additional members for FlyingPenguin
};

int main()
{
  FlyingPenguin myFlyingPenguin;

  // Specify the base class explicitly to resolve ambiguity
  myFlyingPenguin.Bird::speak();    // Inherited from Animal class through Bird
  myFlyingPenguin.Penguin::speak(); // Inherited from Animal class through Penguin

  // myFlyingPenguin.speak(); // Inherited from Animal class
  myFlyingPenguin.fly();   // Inherited from Flyable class
  myFlyingPenguin.chirp(); // Inherited from Bird class
  myFlyingPenguin.swim();  // Inherited from Penguin class

  return 0;
}
