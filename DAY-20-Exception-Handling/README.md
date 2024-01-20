## 📅 TRACK DAYS: 20 of 30

## `✅ Day 20 : Exception Handling`

</br>

## 📑 Contents :

- Exception Handling
  - Definitions
  - Mechanisms
  - Syntax
  - Examples

</br>

### ❕ Exception Handling

- **Definition:**

  - Exception handling in C++ allows a program to handle unexpected events or errors gracefully, preventing them from causing the program to terminate abruptly.

  - Exceptions are used to represent errors or abnormal conditions during the execution of a program.

  - C++ provides a mechanism to throw and catch exceptions using the `try`, `throw`, and `catch` keywords.

### ❕ Exception Handling Syntax:

#### 1️⃣ Throwing an Exception (throw) :

- **Definition:**

  - When a problem occurs in your code, you can use the `throw` keyword to raise an exception.

  - The `throw` statement is followed by an expression that represents the exception being thrown.

- **Code :**

  ```cpp

  throw MyException("Something went wrong");

  ```

#### 2️⃣ Catching an Exception (try, catch) :

- **Definition:**

  - The `try` block is used to enclose the code that might throw an exception.

  - The `catch` block is used to catch and handle the exception.

  - Multiple `catch` blocks can be used to catch different types of exceptions.

- **Code :**

  ```cpp

  try {
      // code that might throw an exception
  }
  catch (MyException &e) {
      // handle MyException
  }
  catch (AnotherException &e) {
      // handle AnotherException
  }

  ```

#### 3️⃣ Exception Classes :

- **Definition:**

  - You can define your own exception classes by deriving from the standard `std::exception` class.

- **Code :**

  ```cpp
  #include <iostream>
  #include <stdexcept>

  class MyException : public std::exception {
  public:
      const char* what() const noexcept override {
          return "My custom exception";
      }
  };

  int main() {
      try {
          throw MyException();
      }
      catch (const std::exception &e) {
          std::cerr << "Caught exception: " << e.what() << std::endl;
      }

      return 0;
  }

  ```

#### 4️⃣ Standard Exception Classes :

- **Definition:**

  - C++ provides several standard exception classes in the `<stdexcept>` header, such as `std::runtime_error`, `std::logic_error`, etc.

- **Code :**

  ```cpp

  #include <iostream>
  #include <stdexcept>

  int main() {
      try {
          throw std::runtime_error("A runtime error occurred");
      }
      catch (const std::exception &e) {
          std::cerr << "Caught exception: " << e.what() << std::endl;
      }

      return 0;
  }

  ```

#### 5️⃣ Rethrowing Exceptions :

- **Definition:**

  - If you catch an exception but cannot handle it, you can rethrow it using the throw statement without an argument.

- **Code :**

  ```cpp

  try {
      // code that might throw an exception
  }
  catch (MyException &e) {
      // handle MyException
      throw; // rethrow the exception
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
