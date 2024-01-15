#include <iostream>
#include <map>

int main()
{
  // Create a map with string keys and int values
  std::map<std::string, int> ages;

  // Insert key-value pairs into the map
  ages["Alice"] = 25;
  ages["Bob"] = 30;
  ages["Charlie"] = 22;

  // Print the map contents
  for (const auto &entry : ages)
  {
    std::cout << entry.first << " is " << entry.second << " years old\n";
  }

  return 0;
}
