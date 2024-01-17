## 📅 TRACK DAYS: 17 of 30

## `✅ Day 17 : Standard Template Library (STL) - Sets`

</br>

## 📑 Contents :

- STL : SETS
  - Definitions
  - Types :
    - std::set

</br>

### 🏛️ STL : Maps

- **Definition:**

  - A set is a container that stores unique elements in a sorted order.

  - It does not allow duplicate elements.

  - The elements in a set are always sorted, and their order is determined by a comparison function.

### 🏛️ STL : Maps - Types

#### 1️⃣ std::set :

- **Definition:**

  - The primary set implementation in STL.

  - It is part of the <set> header.

  - Elements are stored in a sorted order.

- **Syntax :**

  ```cpp
  #include <set>

  // Declaration
  std::set<DataType> set_name;

  // Insert elements
  set_name.insert(element);

  // Remove elements
  set_name.erase(element);

  // Check if an element exists
  auto it = set_name.find(element);
  if (it != set_name.end()) {
      // Element found
  }

  // Iterate through the set
  for (const auto& element : set_name) {
      // Process each element
  }

  ```

- **Code Example :**

- **Example 1: Basic Set Operations :**

  ```cpp
  #include <iostream>
  #include <set>

  int main() {
      // Declaration
      std::set<int> mySet;

      // Insert elements
      mySet.insert(5);
      mySet.insert(2);
      mySet.insert(8);

      // Iterate through the set
      for (const auto& element : mySet) {
          std::cout << element << " ";
      }
      // Output: 2 5 8

      // Check if an element exists
      auto it = mySet.find(5);
      if (it != mySet.end()) {
          std::cout << "\nElement 5 found in the set.\n";
      }

      // Remove an element
      mySet.erase(5);

      // Iterate through the modified set
      for (const auto& element : mySet) {
          std::cout << element << " ";
      }
      // Output: 2 8

      return 0;
  }

  ```

- **Example 2: Using Custom Comparison Function :**

  ```cpp
  #include <iostream>
  #include <set>

  struct CustomCompare {
      bool operator()(const std::string& a, const std::string& b) const {
          return a.length() < b.length();
      }
  };

  int main() {
      // Set with custom comparison function
      std::set<std::string, CustomCompare> stringSet;

      // Insert elements
      stringSet.insert("apple");
      stringSet.insert("banana");
      stringSet.insert("cherry");

      // Iterate through the set
      for (const auto& element : stringSet) {
          std::cout << element << " ";
      }
      // Output: apple cherry banana

      return 0;
  }

  ```

</br></br>

<h4 align="center">
© 30 DAYS OF C++ [ 2024-25 ] </br>
ALL RIGHTS RESERVED
</h4>

<p align="center">
HAPPY LEARNING !!</br>
DEVELOPED WITH ❤️ BY SNEH KR
</p>
