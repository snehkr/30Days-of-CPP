## 📅 TRACK DAYS: 09 of 30

## `✅ Day 09 : OOPS - Inheritance`

</br>

## 📑 Contents :

- Inheritance
  - Definitions
    - Base Class (or Parent Class)
    - Derived Class (or Subclass)
  - Types
    - Single Inheritance
    - Multiple Inheritance
    - Multilevel Inheritance
    - Hierarchical Inheritance
    - Hybrid Inheritance

</br>

### 🧬 Inheritance : Definitions

- **Definition:**

  - Inheritance is a fundamental concept in OOP that allows a new class (subclass or derived class) to inherit properties and behaviors from an existing class (base class or parent class).

  - This promotes code reuse and the creation of a hierarchical structure in your code.

- **Base Class (or Parent Class):**

  - The class whose properties and behaviors are inherited by another class. It is also referred to as the superclass.

- **Derived Class (or Subclass):**

  - The class that inherits properties and behaviors from another class. It is also referred to as the subclass.

### 🧬 Inheritance : Types

#### 1️⃣ Single Inheritance :

- **Definition:**

  - In single inheritance, a class can inherit from only one superclass.
  - This means that a subclass has only one immediate parent class.

- **Syntax:**

  ```cpp
    class BaseClass {
        // Base class members
    };

    class DerivedClass : public BaseClass {
        // Derived class members
    };

  ```

- **Example:**

  ```cpp
    #include <iostream>

    class Animal {
    public:
        void speak() {
            std::cout << "Animal speaks" << std::endl;
        }
    };

    class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Dog barks" << std::endl;
        }
    };

    int main() {
        Dog myDog;
        myDog.speak();  // Inherited from Animal class
        myDog.bark();
        return 0;
    }

  ```

#### 2️⃣ Multiple Inheritance :

- **Definition:**

  - In multiple inheritance, a class can inherit from more than one superclass.
  - This allows a subclass to inherit properties and behaviors from multiple parent classes.

- **Syntax:**

  ```cpp
    class Class1 {
        // Class1 members
    };

    class Class2 {
        // Class2 members
    };

    class DerivedClass : public Class1, public Class2 {
        // Derived class members
    };

  ```

- **Example:**

  ```cpp
    #include <iostream>

    class Flyable {
    public:
        void fly() {
            std::cout << "Can fly" << std::endl;
        }
    };

    class Swimmable {
    public:
        void swim() {
            std::cout << "Can swim" << std::endl;
        }
    };

    class Duck : public Flyable, public Swimmable {
        // Duck members
    };

    int main() {
        Duck myDuck;
        myDuck.fly();
        myDuck.swim();
        return 0;
    }

  ```

#### 3️⃣ Multilevel Inheritance :

- **Definition:**

  - In multilevel inheritance, a class can inherit from another class, and then another class can inherit from the second class, forming a chain of inheritance.

- **Syntax:**

  ```cpp
    class Class1 {
        // Class1 members
    };

    class Class2 : public Class1 {
        // Class2 members
    };

    class DerivedClass : public Class2 {
        // Derived class members
    };

  ```

- **Example:**

  ```cpp
    #include <iostream>

    class Animal {
    public:
        void speak() {
            std::cout << "Animal speaks" << std::endl;
        }
    };

    class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Dog barks" << std::endl;
        }
    };

    class Bulldog : public Dog {
    public:
        void guard() {
            std::cout << "Bulldog guards" << std::endl;
        }
    };

    int main() {
        Bulldog myBulldog;
        myBulldog.speak();  // Inherited from Animal class
        myBulldog.bark();   // Inherited from Dog class
        myBulldog.guard();
        return 0;
    }

  ```

#### 4️⃣ Hierarchical Inheritance :

- **Definition:**

  - In hierarchical inheritance, a single base class is inherited by multiple derived classes.
  - Each derived class becomes a base class for further classes.

- **Syntax:**

  ```cpp
    class BaseClass {
        // Base class members
    };

    class DerivedClass1 : public BaseClass {
        // DerivedClass1 members
    };

    class DerivedClass2 : public BaseClass {
        // DerivedClass2 members
    };

  ```

- **Example:**

  ```cpp
    #include <iostream>

    class Shape {
    public:
        void draw() {
            std::cout << "Drawing shape" << std::endl;
        }
    };

    class Circle : public Shape {
    public:
        void draw() {
            std::cout << "Drawing circle" << std::endl;
        }
    };

    class Rectangle : public Shape {
    public:
        void draw() {
            std::cout << "Drawing rectangle" << std::endl;
        }
    };

    class Square : public Rectangle {
    public:
        void draw() {
            std::cout << "Drawing square" << std::endl;
        }
    };

    int main() {
        Square mySquare;
        mySquare.draw();  // Draws a square (overrides Rectangle's draw method)
        return 0;
    }

  ```

#### 5️⃣ Hybrid Inheritance :

- **Definition:**

  - Hybrid inheritance is a combination of two or more types of inheritance within a single program.
  - It often involves a mix of single inheritance, multiple inheritance, and/or multilevel inheritance.

- **Syntax:**

  ```cpp
    class Animal {
        // Animal members
    };

    class Flyable {
        // Flyable members
    };

    class Bird : public Animal, public Flyable {
        // Bird members
    };

    class Penguin : public Animal {
        // Penguin members
    };

    class FlyingPenguin : public Bird, public Penguin {
        // FlyingPenguin members
    };

  ```

- **Example:**

  ```cpp
    #include <iostream>

    class Animal {
    public:
        void speak() {
            std::cout << "Animal speaks" << std::endl;
        }
    };

    class Flyable {
    public:
        void fly() {
            std::cout << "Can fly" << std::endl;
        }
    };

    class Bird : public Animal, public Flyable {
    public:
        void chirp() {
            std::cout << "Bird chirps" << std::endl;
        }
    };

    class Penguin : public Animal {
    public:
        void swim() {
            std::cout << "Penguin swims" << std::endl;
        }
    };

    class FlyingPenguin : public Bird, public Penguin {
        // Additional members for FlyingPenguin
    };

    int main() {
        FlyingPenguin myFlyingPenguin;
        myFlyingPenguin.speak();  // Inherited from Animal class
        myFlyingPenguin.fly();    // Inherited from Flyable class
        myFlyingPenguin.chirp();
        myFlyingPenguin.swim();
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
