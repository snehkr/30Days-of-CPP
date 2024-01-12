## 📅 TRACK DAYS: 12 of 30

## `✅ Day 12 : OOPS - Abstraction`

</br>

## 📑 Contents :

- Abstraction
  - Definitions
  - Types
    - Data Abstraction
    - Procedural Abstraction
  - Advantages

</br>

### 🍬 Abstraction : Definitions

- **Definition:**

  - Abstraction is a fundamental concept in computer science and programming that involves simplifying complex systems by modeling classes based on essential properties and hiding unnecessary details from the user.

  - It helps in managing complexity and allows programmers to focus on relevant aspects of the system without getting overwhelmed by the intricacies of its implementation.

  - In object-oriented programming languages like C++, abstraction is typically achieved through classes and interfaces.

### 🍬 Abstraction : Types

#### 🅰️ Data Abstraction :

- **Definition:**

  - Data abstraction involves the representation of essential features of an object while hiding its complex implementation details.

- **Syntax :**

  ```cpp
    class AbstractionExample {
    private:
        int data;

    public:
        void setData(int value) {
            data = value;
        }

        int getData() {
            return data;
        }
    };

  ```

- **Example:**

  ```cpp
    AbstractionExample obj;
    obj.setData(42);
    cout << "Data: " << obj.getData() << endl;

  ```

#### 🅱️ Procedural Abstraction :

- **Definition:**

  - Procedural abstraction involves defining functions and procedures to perform certain tasks without revealing the internal details of their implementation.

- **Syntax:**

  ```cpp
    void performTask() {
        // Implementation details hidden
        // ...
    }

  ```

- **Example:**

  ```cpp
    void printMessage() {
        cout << "Hello, Abstraction!" << endl;
    }

    int main() {
        printMessage();
        return 0;
    }

  ```

### 🍬 Abstraction : Advantages

1. **Simplicity:**

   - Abstraction simplifies complex systems by breaking them down into manageable and understandable components.

2. **Reusability:**

   - Abstraction allows for the reuse of code by encapsulating implementation details.
   - Classes and functions can be used in different parts of a program or in different programs altogether.

3. **Maintenance:**

   - Changes to the implementation details of a class or function do not affect the code that uses it, as long as the interface remains the same.
   - This makes maintenance and updates easier.

4. **Security:**

   - Abstraction helps in hiding sensitive information and implementation details, enhancing the security of the code.

5. **Efficiency:**

   - Abstraction promotes code efficiency by allowing developers to focus on high-level design without getting bogged down by low-level details.

</br></br>

<h4 align="center">
© 30 DAYS OF C++ [ 2024-25 ] </br>
ALL RIGHTS RESERVED
</h4>

<p align="center">
HAPPY LEARNING !!</br>
DEVELOPED WITH ❤️ BY SNEH KR
</p>
