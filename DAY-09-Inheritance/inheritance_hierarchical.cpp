#include <iostream>
using namespace std;

class Shape
{
public:
  void draw()
  {
    cout << "Drawing shape" << endl;
  }
};

class Circle : public Shape
{
public:
  void draw()
  {
    cout << "Drawing circle" << endl;
  }
};

class Rectangle : public Shape
{
public:
  void draw()
  {
    cout << "Drawing rectangle" << endl;
  }
};

class Square : public Rectangle
{
public:
  void draw()
  {
    cout << "Drawing square" << endl;
  }
};

int main()
{
  Square mySquare;
  mySquare.draw(); // Draws a square (overrides Rectangle's draw method)
  return 0;
}
