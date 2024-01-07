## 📅 TRACK DAYS: 07 of 30

## `✅ Day 07 : String`

</br>

## 📑 Contents :

- C++ Array
  - Definition
  - Types of Strings
    - C-Style Strings (Character Arrays)
    - C++ Strings (std::string)
  - Initialization and Assignment
  - Basic String Operations
    - Concatenation
    - Length
    - Accessing Characters
    - Substring
  - String Input and Output
    - Reading
    - Writing
  - Comparison
    - Equality
    - Comparison
  - Manipulation
    - Append
    - Find
    - Replace

</br>

### ⚓ String : Definitions

- **Definition:**

  - A string is a collection of characters stored in contiguous memory locations.
  - In C++, strings are implemented using the std::string class, which is part of the C++ Standard Library.

#### 1️⃣ C-Style Strings (Character Arrays) :

- **Example:**

  ```cpp
  char myString[] = "Hello, World!";

  ```

#### 2️⃣ C++ Strings (std::string) :

- **Example:**

  ```cpp
  #include <string>
  std::string cppString = "Hello, World!";

  ```

### ⚓ Basic String Operations :

1. Concatenation

   - **Example:**

     ```cpp
     std::string str1 = "Hello";
     std::string str2 = "World";
     std::string result = str1 + " " + str2;  // "Hello World"

     ```

2. Length

   - **Example:**

     ```cpp
     std::string myString = "Hello, World!";
     int length = myString.length();  // 13

     ```

3. Accessing Characters

   - **Example:**

     ```cpp
     char firstChar = myString[0];  // 'H'

     ```

4. Substring

   - **Example:**

     ```cpp
     std::string substring = myString.substr(7, 5);  // "World"

     ```

### ⚓ String Input and Output :

1. Reading

   - **Example:**

     ```cpp
     std::string userInput;
     std::cout << "Enter a string: ";
     std::cin >> userInput;

     ```

2. Writing

   - **Example:**

     ```cpp
     std::string outputString = "Hello, World!";
     std::cout << outputString << std::endl;

     ```

### ⚓ String Comparison :

1. Equality

   - **Example:**

     ```cpp
     std::string str1 = "Hello";
     std::string str2 = "Hello";
     if (str1 == str2) {
          // Equal
     }

     ```

2. Comparison

   - **Example:**

     ```cpp
     if (str1.compare(str2) == 0) {
          // Equal
     }

     ```

### ⚓ String Manipulation :

1. Append

   - **Example:**

     ```cpp
     std::string str1 = "Hello";
     std::string str2 = " World!";
     str1 += str2;  // "Hello World!"

     ```

2. Find

   - **Example:**

     ```cpp
     std::string myString = "Hello, World!";
     size_t found = myString.find("World");

     ```

3. Replace

   - **Example:**

     ```cpp
     myString.replace(7, 5, "Universe");  // "Hello, Universe!"

     ```

### ✍🏼 Uses of Strings :

- **Text Representation:**

  - Strings represent and manipulate text data, such as names, addresses, and messages.

- **User Input and Output:**

  - Strings handle user input and output, facilitating interaction with users.

- **File Handling:**

  - Strings are used in reading from and writing to files, representing data during file operations.

- **Data Serialization:**

  - Strings represent complex data structures in a string format for storage or transmission.

- **Database Operations:**

  - Strings are crucial in database applications, representing and manipulating data stored in databases.

- **Text Processing:**

  - Strings are used for text processing tasks like searching, parsing, and tokenization.

- **Graphics and GUI Programming:**

  - Strings display labels, button text, and other textual elements in graphical user interfaces.

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
