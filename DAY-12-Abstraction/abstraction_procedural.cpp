#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width)
{
  return length * width;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius)
{
  return 3.14159 * radius * radius;
}

int main()
{
  double rectangleLength, rectangleWidth, circleRadius;

  // Get input for rectangle dimensions
  cout << "Enter the length of the rectangle: ";
  cin >> rectangleLength;
  cout << "Enter the width of the rectangle: ";
  cin >> rectangleWidth;

  // Calculate and display the area of the rectangle
  double rectangleArea = calculateRectangleArea(rectangleLength, rectangleWidth);
  cout << "The area of the rectangle is: " << rectangleArea << endl;

  // Get input for circle radius
  cout << "Enter the radius of the circle: ";
  cin >> circleRadius;

  // Calculate and display the area of the circle
  double circleArea = calculateCircleArea(circleRadius);
  cout << "The area of the circle is: " << circleArea << endl;

  return 0;
}
