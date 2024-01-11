## 📅 TRACK DAYS: 11 of 30

## `✅ Day 11 : OOPS - Encapsulation`

</br>

## 📑 Contents :

- Encapsulation
  - Definitions
  - Types
    - Data Encapsulation
    - Procedural Encapsulation
      - using a namespace
      - using a static class with static member functions
  - Advantages

</br>

### 🍬 Encapsulation : Definitions

- **Definition:**

  - Encapsulation is one of the four fundamental Object-Oriented Programming (OOP) concepts, alongside inheritance, polymorphism, and abstraction.

  - It refers to the bundling of data and methods that operate on that data within a single unit or class.

  - The primary goal of encapsulation is to hide the internal implementation details of an object and provide a well-defined interface for interacting with that object.

### 🍬 Encapsulation : Types

#### 🅰️ Data Encapsulation (Information Hiding):

- **Definition:**

  - In C++, data encapsulation, often referred to as information hiding, involves hiding the internal implementation details of a class and exposing only the necessary information through a well-defined interface.

  - This is achieved by declaring the data members as private and providing public methods (getters and setters) to access or modify those private members.

- **Syntax & Example:**

  ```cpp
    #include <iostream>
    #include <string>

    using namespace std;

    class Person {
    private:
        string name;
        int age;

    public:
        // Constructor to initialize data members
        Person(const string& n, int a) : name(n), age(a) {}

        // Getter method for the 'name' data member
        string getName() const {
            return name;
        }

        // Setter method for the 'name' data member
        void setName(const string& newName) {
            name = newName;
        }

        // Getter method for the 'age' data member
        int getAge() const {
            return age;
        }

        // Setter method for the 'age' data member
        void setAge(int newAge) {
            // Validate age to ensure it's non-negative
            if (newAge >= 0) {
                age = newAge;
            } else {
                cerr << "Age cannot be negative." << endl;
            }
        }
    };

    int main() {
        // Creating an object of the Person class
        Person person1("John Doe", 25);

        // Accessing private data through public methods
        cout << "Name: " << person1.getName() << ", Age: " << person1.getAge() << endl;

        // Modifying private data through public methods
        person1.setName("Jane Doe");
        person1.setAge(30);

        // Displaying the updated information
        cout << "Name: " << person1.getName() << ", Age: " << person1.getAge() << endl;

        return 0;
    }

  ```

#### 🅱️ Procedural Encapsulation:

- **Definition:**

  - Procedural Encapsulation refers to bundling related procedures (functions) together into a module or package.

  - In C++, this can be achieved by organizing related functions within a namespace or a static class.

- **1️⃣ using a namespace**

  - **Syntax & Example:**

    ```cpp
    #include <iostream>

    using namespace std;

    // Procedural encapsulation using a namespace
    namespace MathOperations {
        int add(int a, int b) {
            return a + b;
        }

        int subtract(int a, int b) {
            return a - b;
        }

        int multiply(int a, int b) {
            return a * b;
        }

        double divide(double a, double b) {
            if (b != 0) {
                return a / b;
            } else {
                cerr << "Cannot divide by zero." << endl;
                return 0.0; // Default value for error case
            }
        }
    }

    int main() {
        // Using functions from the MathOperations namespace
        int sum = MathOperations::add(10, 5);
        int difference = MathOperations::subtract(10, 5);
        int product = MathOperations::multiply(10, 5);
        double quotient = MathOperations::divide(10.0, 5.0);

        // Displaying results
        cout << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Quotient: " << quotient << endl;

        return 0;
    }


    ```

- **1️⃣ using a static class with static member functions**

  - **Syntax & Example:**

    ```cpp
      #include <iostream>

      using namespace std;

      // Procedural encapsulation using a static class
      class MathOperations {
      public:
          static int add(int a, int b) {
              return a + b;
          }

          static int subtract(int a, int b) {
              return a - b;
          }

          static int multiply(int a, int b) {
              return a * b;
          }

          static double divide(double a, double b) {
              if (b != 0) {
                  return a / b;
              } else {
                  cerr << "Cannot divide by zero." << endl;
                  return 0.0; // Default value for error case
              }
          }
      };

      int main() {
          // Using static member functions of the MathOperations class
          int sum = MathOperations::add(10, 5);
          int difference = MathOperations::subtract(10, 5);
          int product = MathOperations::multiply(10, 5);
          double quotient = MathOperations::divide(10.0, 5.0);

          // Displaying results
          cout << "Sum: " << sum << endl;
          cout << "Difference: " << difference << endl;
          cout << "Product: " << product << endl;
          cout << "Quotient: " << quotient << endl;

          return 0;
      }

    ```

### 🍬 Encapsulation : Advantages

1. **Data Protection:**

   - Encapsulation helps in protecting the integrity of the data by restricting direct access. The internal representation of an object is hidden from the outside world.

2. **Modularity:**

   - Encapsulation promotes modularity by bundling related data and methods into a single unit. This makes the code more organized and easier to understand.

3. **Flexibility and Maintenance:**

   - Changes to the internal implementation of a class do not affect the external code that uses the class, as long as the public interface remains the same. This makes it easier to update and maintain the code.

4. **Code Reusability:**

   - Encapsulation facilitates code reuse since objects can be treated as black boxes with well-defined interfaces. Objects can be used in different contexts without worrying about their internal details.

5. **Security:**

   - By hiding the internal details, encapsulation provides a level of security. Users can only interact with the object through its public interface, reducing the risk of unintended interference.

</br></br>

<h4 align="center">
© 30 DAYS OF C++ [ 2024-25 ] </br>
ALL RIGHTS RESERVED
</h4>

<p align="center">
HAPPY LEARNING !!</br>
DEVELOPED WITH ❤️ BY SNEH KR
</p>
