#include <iostream>
using namespace std;

class Flyable
{
public:
  void fly()
  {
    cout << "Can fly" << endl;
  }
};

class Swimmable
{
public:
  void swim()
  {
    cout << "Can swim" << endl;
  }
};

class Duck : public Flyable, public Swimmable
{
  // Duck members
};

int main()
{
  Duck myDuck;
  myDuck.fly();
  myDuck.swim();
  return 0;
}
