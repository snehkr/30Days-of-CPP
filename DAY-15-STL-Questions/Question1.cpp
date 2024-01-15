#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers and fill it with values 1 to 5
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  // Print the elements of the vector using an iterator
  for (auto it = numbers.begin(); it != numbers.end(); ++it)
  {
    std::cout << *it << " ";
  }

  return 0;
}
