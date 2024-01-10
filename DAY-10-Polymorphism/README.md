## 📅 TRACK DAYS: 10 of 30

## `✅ Day 10 : OOPS - Polymorphism`

</br>

## 📑 Contents :

- Polymorphism
  - Definitions
  - Types
    - Compile Time
      - Function Overloading
      - Operator Overloading
    - Run Time
      - Virtual functions
  - Advantages

</br>

### 🍬 Polymorphism : Definitions

- **Definition:**

  - Polymorphism in C++ refers to the ability of a class or function to take on multiple forms.

  - It allows objects of different types to be treated as objects of a common base type.

  - There are two main types of polymorphism in C++:

    - compile-time (or static) polymorphism
    - runtime (or dynamic) polymorphism.

### 🍬 Polymorphism : Types

#### 1️⃣ Compile Time (or static) Polymorphism :

- **Definition:**

  - Compile-time polymorphism is achieved through function overloading and operator overloading.

  - It is resolved during the compilation of the program.

  #### 🅰️ Function Overloading:

  - **Definition:**

    - Function overloading allows multiple functions with the same name but different parameters in the same scope.

  - **Syntax:**

    ```cpp
      returnType functionName(type1 param1, type2 param2, ...);
      returnType functionName(type1 param1, type2 param2, ...);
      // More overloaded functions if needed

    ```

  - **Example:**

    ```cpp
      #include <iostream>

      int add(int a, int b) {
          return a + b;
      }

      double add(double a, double b) {
          return a + b;
      }

      int main() {
          std::cout << add(5, 10) << std::endl;       // Calls int version
          std::cout << add(3.5, 7.2) << std::endl;    // Calls double version

          return 0;
      }

    ```

  #### 🅱️ Operator Overloading:

  - **Definition:**

    - Operator overloading allows you to redefine the behavior of operators for user-defined data types.

  - **Syntax:**

    ```cpp
      returnType operator OP(parameters) {
          // Operator implementation
      }

    ```

  - **Example:**

    ```cpp
      #include <iostream>

      class Complex {
      public:
          int real, imag;

          Complex operator+(const Complex& obj) {
              Complex temp;
              temp.real = real + obj.real;
              temp.imag = imag + obj.imag;
              return temp;
          }
      };

      int main() {
          Complex c1, c2, result;
          // Initialize c1 and c2
          result = c1 + c2;   // Calls overloaded '+' operator

          return 0;
      }

    ```

#### 2️⃣ Run Time (or dynamic) Polymorphism :

- **Definition:**

  - Runtime polymorphism is achieved through virtual functions and is resolved during program execution.

  - It involves the use of pointers and virtual functions in base and derived classes.

  #### 🅰️ Virtual Functions:

  - **Definition:**

    - Virtual functions are declared in a base class and can be overridden in derived classes.

  - **Syntax:**

    ```cpp
      class Base {
      public:
          virtual returnType functionName(parameters) {
              // Virtual function implementation
          }
      };

      class Derived : public Base {
      public:
          returnType functionName(parameters) override {
              // Derived class implementation
          }
      };

    ```

  - **Example:**

    ```cpp
      #include <iostream>

      class Shape {
      public:
          virtual void draw() {
              std::cout << "Drawing a shape." << std::endl;
          }
      };

      class Circle : public Shape {
      public:
          void draw() override {
              std::cout << "Drawing a circle." << std::endl;
          }
      };

      int main() {
          Shape* shapePtr = new Circle();
          shapePtr->draw();   // Calls draw() of Circle class

          delete shapePtr;

          return 0;
      }

    ```

### 🍬 Polymorphism : Advantages

1. **Code Reusability:**

   - Polymorphism allows the same function or operator to be used with different data types, promoting code reuse.

2. **Flexibility:**

   - It provides flexibility in the design and structure of programs, as new classes can be added without modifying existing code.

3. **Readability:**

   - Polymorphism enhances code readability by allowing the use of the same interface for different types of objects.

4. **Maintenance:**

   - It simplifies maintenance by encapsulating changes within the derived classes, minimizing the impact on the rest of the code.

5. **Extensibility:**

   - Polymorphism makes it easier to extend the functionality of a program by adding new classes that adhere to existing interfaces.

</br></br>

<h4 align="center">
© 30 DAYS OF C++ [ 2024-25 ] </br>
ALL RIGHTS RESERVED
</h4>

<p align="center">
HAPPY LEARNING !!</br>
DEVELOPED WITH ❤️ BY SNEH KR
</p>
