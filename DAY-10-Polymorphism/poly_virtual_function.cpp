#include <iostream>

using namespace std;

class Shape
{
public:
  virtual void draw()
  {
    cout << "Drawing a shape." << endl;
  }
};

class Circle : public Shape
{
public:
  void draw() override
  {
    cout << "Drawing a circle." << endl;
  }
};

int main()
{
  Shape *shapePtr = new Circle();
  shapePtr->draw(); // Calls draw() of Circle class

  delete shapePtr;

  return 0;
}