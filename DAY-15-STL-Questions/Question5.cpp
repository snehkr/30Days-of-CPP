#include <iostream>
#include <vector>

int main()
{
  // Create a vector of integers
  std::vector<int> numbers = {2, 4, 6, 8, 10};

  // Use iterator to double each element in the vector
  for (auto it = numbers.begin(); it != numbers.end(); ++it)
  {
    *it *= 2;
  }

  // Print the modified vector
  for (const auto &num : numbers)
  {
    std::cout << num << " ";
  }

  return 0;
}
