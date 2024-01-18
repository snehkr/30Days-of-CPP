## 📅 TRACK DAYS: 18 of 30

## `✅ Day 18 : Standard Template Library (STL) - Sorting and Searching`

</br>

## 📑 Contents :

- STL : Sorting and Searching
  - Definitions
  - Operations
  - Examples

</br>

### 🏛️ STL : Sorting Algorithms

#### 1️⃣ std::sort :

- **Definition:**

  - Performs a sorting operation on a range of elements.

- **Example :**

  ```cpp

  #include <algorithm>
  #include <vector>

  int main() {
      std::vector<int> numbers = {5, 2, 8, 1, 3};
      std::sort(numbers.begin(), numbers.end());

      // Now 'numbers' contains {1, 2, 3, 5, 8}
  }


  ```

#### 2️⃣ std::stable_sort :

- **Definition:**

  - Similar to std::sort, but maintains the relative order of equivalent elements.

- **Example :**

  ```cpp

  #include <algorithm>
  #include <vector>

  int main() {
      std::vector<int> numbers = {5, 2, 8, 1, 3};
      std::stable_sort(numbers.begin(), numbers.end());

      // Now 'numbers' contains {1, 2, 3, 5, 8}, maintaining the relative order of equivalent elements
  }

  ```

### 🏛️ STL : Searching Algorithms

#### 1️⃣ std::binary_search :

- **Definition:**

  - Checks if a value exists in a sorted range.

- **Example :**

  ```cpp

  #include <algorithm>
  #include <vector>

  int main() {
      std::vector<int> numbers = {1, 2, 3, 5, 8};
      bool found = std::binary_search(numbers.begin(), numbers.end(), 3);

      // 'found' is true, as 3 is present in the vector
  }

  ```

#### 2️⃣ std::lower_bound and std::upper_bound :

- **Definition:**

  - `std::lower_bound` returns an iterator pointing to the first element not less than a given value.

  - `std::upper_bound` returns an iterator pointing to the first element greater than a given value.

- **Example :**

  ```cpp

  #include <algorithm>
  #include <vector>

  int main() {
      std::vector<int> numbers = {1, 2, 3, 5, 8};
      auto it_lower = std::lower_bound(numbers.begin(), numbers.end(), 3);
      auto it_upper = std::upper_bound(numbers.begin(), numbers.end(), 3);

      // 'it_lower' points to the element 3, 'it_upper' points to the element 5
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
