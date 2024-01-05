## 📅 TRACK DAYS: 05 of 30

## `✅ Day 05 : Functions`

</br>

## 📑 Contents :

- C++ Functions
  class MathOperations {
public:
    // Static member function
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    int sum = MathOperations::add(3, 4); // Calling a static member function
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

  - Function Overloading
  - Function Overriding
  - Member Functions
    - Instance Member Functions
    - Static Member Functions

</br>

### 0️⃣ Functions : Definitions

- **Definition:**

  - A Function is a reusable block of code that performs a specific task.
  - Functions are essential for code organization, modularity, and reusability.
  - They allow you to break down a large program into smaller, manageable pieces.

- **Syntax:**

  ```cpp
  return_type function_name(parameters) {
      // function body
      // code to perform the task
      // return statement (if applicable)
  }

  ```

  - `return_type:` Specifies the type of value the function returns. It can be any valid C++ data type, or void if the function doesn't return any value.

  - `function_name:` The name of the function, used to call the function in the program.

  - `parameters:` Input values passed to the function. It can be empty if the function doesn't require any parameters.

### 1️⃣ Function without Parameters and Return Value :

- **Definition:** A function without parameters and return value in C++ is a function that doesn't take any input parameters and doesn't return any value.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  void greet() {
      cout << "Hello, world!" << endl;
  }

  int main() {
      greet(); // Function call
      return 0;
  }

  ```

### 2️⃣ Function with Parameters but No Return Value :

- **Definition:** A function with parameters but no return value in C++ is a function that takes input parameters to perform a specific task or set of tasks but does not produce any result that needs to be returned to the calling code.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  void printSum(int a, int b) {
      cout << "Sum: " << a + b << endl;
  }

  int main() {
      printSum(5, 7); // Function call with arguments
      return 0;
  }

  ```

### 3️⃣ Function with Parameters and Return Value :

- **Definition:** A function with parameters and a return value in C++ is a function that takes input parameters, performs a specific computation or task based on those parameters, and returns a result to the calling code.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  int add(int a, int b) {
      return a + b;
  }

  int main() {
      int result = add(3, 4); // Function call with arguments and storing the result
      cout << "Sum: " << result << endl;
      return 0;
  }

  ```

### 4️⃣ Function Overloading :

- **Definition:** Function overloading in C++ is a feature that allows you to define multiple functions with the same name in the same scope, but with different parameter lists.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  int add(int a, int b) {
      return a + b;
  }

  double add(double a, double b) {
      return a + b;
  }

  int main() {
      int result1 = add(3, 4);
      double result2 = add(2.5, 3.5);

      cout << "Sum (int): " << result1 << endl;
      cout << "Sum (double): " << result2 << endl;

      return 0;
  }


  ```

### 5️⃣ Function Overriding :

- **Definition:**

  - Function overriding is a concept related to polymorphism in object-oriented programming (OOP).
  - In C++, function overriding occurs when a derived class provides a specific implementation for a function that is already defined in its base class.
  - This allows the derived class to provide a specialized version of the function while maintaining a common interface with the base class.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  // Base class
  class Shape {
  public:
      virtual void draw() const {
          cout << "Drawing a shape." << endl;
      }
  };

  // Derived class
  class Circle : public Shape {
  public:
      // Override the draw function in the base class
      void draw() const override {
          cout << "Drawing a circle." << endl;
      }
  };

  // Another derived class
  class Square : public Shape {
  public:
      // Override the draw function in the base class
      void draw() const override {
          cout << "Drawing a square." << endl;
      }
  };

  int main() {
      Shape* shapePtr;

      Circle circle;
      Square square;

      // Point to a Circle object and call the overridden draw function
      shapePtr = &circle;
      shapePtr->draw();

      // Point to a Square object and call the overridden draw function
      shapePtr = &square;
      shapePtr->draw();

      return 0;
  }

  ```

### 6️⃣ Member Functions :

- A member function is a function that is associated with a specific class or object.

- Member functions are a fundamental concept in object-oriented programming (OOP), where they are used to define the behavior of objects.

- They operate on the data members of the class and encapsulate the functionality that is specific to the class.

</br>

1.  `Instance Member Functions :`

    - **Definition:**

      - These are functions that operate on an instance of a class (an object).
      - They have access to the object's data members and can manipulate the state of the object.

    - **Example:**

      ```cpp
      #include <iostream>
      using namespace std;

      class MyClass {
      public:
          // Instance member function
          void display() {
              cout << "This is an instance member function." << endl;
          }
      };

      int main() {
          MyClass obj;
          obj.display(); // Calling an instance member function
          return 0;
      }

      ```

2.  `Static Member Functions :`

    - **Definition:**

      - These functions are associated with the class itself rather than instances of the class.
      - They do not have access to instance-specific data members and can be called using the class name without creating an object.

    - **Example:**

      ```cpp
      #include <iostream>
      using namespace std;

      class MathOperations {
      public:
          // Static member function
          static int add(int a, int b) {
              return a + b;
          }
      };

      int main() {
          int sum = MathOperations::add(3, 4); // Calling a static member function
          cout << "Sum: " << sum << endl;
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
