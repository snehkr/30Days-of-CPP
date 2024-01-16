## 📅 TRACK DAYS: 16 of 30

## `✅ Day 16 : Standard Template Library (STL) - Maps`

</br>

## 📑 Contents :

- STL : MAPS
  - Definitions
  - Types :
    - std::map
    - std::multimap

</br>

### 🏛️ STL : Maps

- **Definition:**

  - In C++ Standard Template Library (STL), a map is an associative container that stores key-value pairs.

  - It is implemented as a sorted binary tree (usually a red-black tree) and provides fast lookup, insertion, and deletion of elements based on their keys.

- `Associative Container:`

  - A type of container in which elements are stored in an ordered manner and can be accessed using keys rather than indices.

- `Key-Value Pair:`

  - A pair of values, where one value (the key) is used to index or identify the associated value.

- `Sorted Binary Tree:`

  - A binary tree in which elements are arranged in a specific order (e.g., ascending order) to enable efficient search, insertion, and deletion.

### 🏛️ STL : Maps - Syntax

#### 1. Declaration:

```cpp
std::map<KeyType, ValueType> myMap;

```

#### 2. Inserting Elements:

```cpp
myMap[key] = value;  // Using operator[]
myMap.insert(std::make_pair(key, value));

```

#### 3. Accessing Elements:

```cpp
ValueType value = myMap[key];

```

#### 4. Iterating Over Elements:

```cpp
for (const auto& pair : myMap) {
    // Access pair.first (key) and pair.second (value)
}

```

#### 5. Checking Existence:

```cpp
if (myMap.find(key) != myMap.end()) {
    // Key exists in the map
}

```

#### 6. Erasing Elements:

```cpp
myMap.erase(key);

```

### 🏛️ STL : Maps - Types

#### 1️⃣ std::map :

- **Definition:**

  - std::map is a C++ Standard Template Library (STL) container that represents an associative container with unique keys and corresponding values.

  - It is implemented as a sorted binary tree.

- **Syntax :**

  ```cpp
  #include <map>

  std::map<KeyType, ValueType> myMap;  // Declaration

  ```

- **Code Example :**

  ```cpp
  #include <iostream>
  #include <map>

  int main() {
      std::map<std::string, int> myMap;

      myMap["one"] = 1;
      myMap["two"] = 2;
      myMap["three"] = 3;

      for (const auto& pair : myMap) {
          std::cout << pair.first << ": " << pair.second << std::endl;
      }

      return 0;
  }

  ```

#### 2️⃣ std::multimap :

- **Definition:**

  - std::multimap is another C++ STL container that represents an associative container similar to std::map, but it allows multiple elements with the same key.

- **Syntax :**

  ```cpp
  #include <map>

  std::multimap<KeyType, ValueType> myMultiMap;  // Declaration

  ```

- **Code Example :**

  ```cpp
  #include <iostream>
  #include <map>

  int main() {
      std::multimap<std::string, int> myMultiMap;

      myMultiMap.insert(std::make_pair("one", 1));
      myMultiMap.insert(std::make_pair("two", 2));
      myMultiMap.insert(std::make_pair("one", 111));  // Allows duplicate keys

      for (const auto& pair : myMultiMap) {
          std::cout << pair.first << ": " << pair.second << std::endl;
      }

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
