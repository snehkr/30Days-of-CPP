#include <iostream>
#include <vector>

int main()
{
  // Declare a vector of integers
  std::vector<int> myVector;

  // Add elements to the vector
  myVector.push_back(10);
  myVector.push_back(20);
  myVector.push_back(30);

  // Access elements using index
  std::cout << "Vector Elements: ";
  for (int i = 0; i < myVector.size(); ++i)
  {
    std::cout << myVector[i] << " ";
  }

  return 0;
}
