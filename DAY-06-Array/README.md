## 📅 TRACK DAYS: 06 of 30

## `✅ Day 06 : Array`

</br>

## 📑 Contents :

- C++ Array
  - Definition
  - Types
    - One-Dimensional Array
    - Multidimensional Array
    - Character Array (String)

</br>

### Array : Definitions

- **Definition:**

  - An array is a collection of elements of the same data type, stored in contiguous memory locations.
  - It provides a convenient way to store and access a fixed-size sequential collection of elements.
  - Each element in the array is identified by an index or a key.

- **Syntax:**

  ```cpp
  dataType arrayName[arraySize];

  ```

  - `dataType:` The type of elements that the array will hold.

  - `arrayName:` The identifier for the array.

  - `arraySize:` The number of elements in the array. It must be a constant expression.

### 1️⃣ One-Dimensional Array :

- **Definition:** A one-dimensional array is a collection of elements of the same type arranged in a single line.

- **Example:**

  ```cpp
  int numbers[5]; // One-dimensional array of integers with size 5

  ```

### 2️⃣ Multidimensional Array :

- **Definition:** A multidimensional array is an array of arrays. The most common type is a two-dimensional array.

- **Example:**

  ```cpp
  int matrix[3][3]; // Two-dimensional array of integers with size 3x3

  ```

### 3️⃣ Character Array (String) :

- **Definition:** A special type of one-dimensional array is a character array, often used to represent strings.

- **Example:**

  ```cpp
  char greeting[] = "Hello"; // Character array representing a string

  ```

#### Array Initialization :

- Arrays can be initialized at the time of declaration:

- **Example:**

  ```cpp
  int numbers[] = {1, 2, 3, 4, 5}; // Array initialized with values

  ```

#### Accessing Array Elements :

- Array elements are accessed using their indices, starting from 0.

- **Example:**

  ```cpp
  int x = numbers[2]; // Accesses the third element of the array (index 2)

  ```

#### Iterating through an Array :

- Arrays can be traversed using loops:

- **Example:**

  ```cpp
  for (int i = 0; i < 5; ++i) {
        // Access and use numbers[i]
    }

  ```

### ✍🏼 Uses of Arrays :

- **Storage:**

  - Arrays provide a way to store multiple elements of the same type in a contiguous block of memory.

- **Accessing Elements:**

  - Elements in an array are accessed using their indices, allowing for efficient retrieval.

- **Iteration:**

  - Arrays are well-suited for loop-based operations, making it easy to iterate through elements.

- **Mathematical Operations:**

  - Arrays are often used in mathematical and statistical calculations.

- **Strings:**
  - In C++, strings are often represented as character arrays.

</br>

</br></br>

<h4 align="center">
© 30 DAYS OF C++ [ 2024-25 ] </br>
ALL RIGHTS RESERVED
</h4>

<p align="center">
HAPPY LEARNING !!</br>
DEVELOPED WITH ❤️ BY SNEH KR
</p>
