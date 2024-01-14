#include <iostream>
#include <list>

int main()
{
  // Declare a list of integers
  std::list<int> myList;

  // Add elements to the list
  myList.push_back(10);
  myList.push_back(20);
  myList.push_back(30);

  // Access elements using iterators
  std::cout << "List Elements: ";
  for (auto it = myList.begin(); it != myList.end(); ++it)
  {
    std::cout << *it << " ";
  }

  return 0;
}
