## 📅 TRACK DAYS: 08 of 30

## `✅ Day 08 : Introduction to OOPS`

</br>

## 📑 Contents :

- Introduction to OOPS
  - Definitions
  - Classes
  - Objects
  - Access Specifiers
  - Constructors and Destructors

</br>

### ⭕ OOPS : Definitions

- **Definition:**

  - Object-oriented programming (OOP) is a programming paradigm that uses objects, which are instances of classes, to structure and organize code.

  - C++ is a versatile programming language that supports OOP principles. Let's go through the basics of classes and objects in C++.

#### 1️⃣ Classes :

- **Definition:**

  - A class is a user-defined data type that encapsulates data and the functions that operate on that data.

  - It serves as a blueprint for creating objects.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  // Class definition
  class MyClass {
  public:
      // Member variables
      int myVariable;

      // Member function (method)
      void display() {
          cout << "Value of myVariable: " << myVariable << endl;
      }
  };

  ```

#### 2️⃣ Objects :

- **Definition:**

  - An object is an instance of a class.

  - It represents a real-world entity and is created based on the class blueprint.

- **Example:**

  ```cpp
  int main() {
      // Creating objects of MyClass
      MyClass obj1;
      MyClass obj2;

      // Accessing and modifying member variables
      obj1.myVariable = 10;
      obj2.myVariable = 20;

      // Calling member functions
      obj1.display();
      obj2.display();

      return 0;
  }

  ```

### ⚓ Access Specifiers :

1. `public`

   - **Definition:**

     - Members declared as public are accessible from outside the class.

2. `private`

   - **Definition:**

     - Members declared as private are only accessible within the class.

3. `protected`

   - **Definition:**

     - Similar to private, but accessible in derived classes.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  class AccessExample {
  public:
      // Public members
      int publicVar;

      // Public member function
      void publicFunction() {
          cout << "Public Function called!" << endl;
      }

  private:
      // Private members
      int privateVar;

      // Private member function
      void privateFunction() {
          cout << "Private Function called!" << endl;
      }

  protected:
      // Protected members
      int protectedVar;

      // Protected member function
      void protectedFunction() {
          cout << "Protected Function called!" << endl;
      }
  };

  int main() {
      // Creating an object of AccessExample class
      AccessExample obj;

      // Accessing public members
      obj.publicVar = 10;
      obj.publicFunction();

      // Accessing private members directly results in a compilation error
      obj.privateVar = 20;  // Error: 'int AccessExample::privateVar' is private within this context
      obj.privateFunction(); // Error: 'void AccessExample::privateFunction()' is private within this context

      // Accessing protected members directly results in a compilation error
      obj.protectedVar = 30;  // Error: 'int AccessExample::protectedVar' is protected within this context
      obj.protectedFunction(); // Error: 'void AccessExample::protectedFunction()' is protected within this context

      return 0;
  }


  ```

### ⚓ Constructors and Destructors :

- **Definition:**

  - A constructor is a special member function used for initializing objects when they are created.

  - A destructor is used to clean up resources when an object is destroyed.

- **Example:**

  ```cpp
  class MyClass {
  public:
      int myVariable;

      // Constructor
      MyClass() {
          cout << "Constructor called!" << endl;
      }

      // Destructor
      ~MyClass() {
          cout << "Destructor called!" << endl;
      }

      void display() {
          cout << "Value of myVariable: " << myVariable << endl;
      }
  };

  ```

### 🧬 Inheritance :

- **Definition:**

  - Inheritance is a fundamental concept in object-oriented programming that allows a class (subclass or derived class) to inherit properties and behaviors from another class (superclass or base class).

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  // Base class
  class Animal {
  public:
      void eat() {
          cout << "Animal is eating" << endl;
      }

      void sleep() {
          cout << "Animal is sleeping" << endl;
      }
  };

  // Derived class (inherits from Animal)
  class Dog : public Animal {
  public:
      void bark() {
          cout << "Dog is barking" << endl;
      }
  };

  int main() {
      // Create an object of the derived class
      Dog myDog;

      // Access inherited members
      myDog.eat();
      myDog.sleep();

      // Access unique member of the derived class
      myDog.bark();

      return 0;
  }

  ```

### ⚓ Polymorphism :

- **Definition:**

  - Polymorphism allows objects of different types to be treated as objects of a common type.
  - It can be achieved through function overloading and virtual functions.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  // Base class
  class Shape {
  public:
      // Virtual function
      virtual void draw() {
          cout << "Drawing a shape" << endl;
      }
  };

  // Derived class
  class Circle : public Shape {
  public:
      // Override the draw function
      void draw() override {
          cout << "Drawing a circle" << endl;
      }
  };

  // Function that takes a Shape reference
  void drawShape(Shape& shape) {
      shape.draw();
  }

  int main() {
      // Create objects of different types
      Shape genericShape;
      Circle myCircle;

      // Polymorphic behavior
      drawShape(genericShape); // Calls draw() of Shape
      drawShape(myCircle);     // Calls draw() of Circle

      return 0;
  }

  ```

### ⚓ Encapsulation :

- **Definition:**

  - Encapsulation is the bundling of data (attributes) and methods (functions) that operate on that data into a single unit known as a class.
  - Access specifiers (public, private, protected) control the visibility of class members.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  // Class with encapsulation
  class Person {
  private:
      string name;
      int age;

  public:
      // Public methods to access private members
      void setName(string n) {
          name = n;
      }

      void setAge(int a) {
          if (a > 0) {
              age = a;
          } else {
              cout << "Invalid age!" << endl;
          }
      }

      void displayInfo() {
          cout << "Name: " << name << ", Age: " << age << endl;
      }
  };

  int main() {
      // Create an object of the class
      Person person;

      // Access and modify private members using public methods
      person.setName("John");
      person.setAge(25);

      // Display information
      person.displayInfo();

      return 0;
  }

  ```

### ⚓ Abstraction :

- **Definition:**

  - Abstraction is the process of simplifying complex systems by modeling classes based on their essential properties and behaviors.
  - It involves hiding unnecessary details and exposing only what is essential.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  // Abstract class (contains pure virtual function)
  class Shape {
  public:
      // Pure virtual function (makes the class abstract)
      virtual void draw() = 0;
  };

  // Concrete class (inherits from Shape)
  class Circle : public Shape {
  public:
      // Implement the draw function
      void draw() override {
          cout << "Drawing a circle" << endl;
      }
  };

  int main() {
      // Cannot create an object of the abstract class
      // Shape myShape; // Error: cannot instantiate abstract class

      // Create an object of the derived class
      Circle myCircle;

      // Use abstraction to draw shapes without knowing specific implementations
      Shape* shape = &myCircle;
      shape->draw(); // Calls draw() of Circle

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
