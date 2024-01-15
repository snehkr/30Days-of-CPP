#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  // Create a vector of integers
  std::vector<int> numbers = {5, 2, 8, 3, 1};

  // Sort the vector in ascending order
  std::sort(numbers.begin(), numbers.end());

  // Print the sorted vector
  for (const auto &num : numbers)
  {
    std::cout << num << " ";
  }

  return 0;
}
