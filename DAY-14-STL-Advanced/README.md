## 📅 TRACK DAYS: 14 of 30

## `✅ Day 14 : Standard Template Library (STL) - Advanced`

</br>

## 📑 Contents :

- Standard Template Library (STL)
  - Definitions
  - Components :
    - Vectors
    - Lists
    - Queues

</br>

### 🏛️ Standard Template Library : Definitions

- **Definition:**

  - STL stands for Standard Template Library in C++, which is a powerful collection of template classes and functions that provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.

  - STL is a part of the C++ Standard Library and is designed to work seamlessly with other C++ features.

### 🏛️ Standard Template Library : Components

#### 1️⃣ Vectors :

- **Definition:**

  - Vectors are dynamic arrays that can resize themselves automatically. They provide constant time access to elements and dynamic resizing.

- **Types :**

  ```cpp
    std::vector<T> myVector;  // where T is the type of elements in the vector

  ```

- **Syntax :**

  ```cpp
    #include <vector>

    std::vector<T> myVector;  // Declare a vector
    myVector.push_back(value);  // Add an element to the back
    element = myVector[i];  // Access an element using index

  ```

- **Example :**

  ```cpp
    #include <iostream>
    #include <vector>

    int main() {
        // Declare a vector of integers
        std::vector<int> myVector;

        // Add elements to the vector
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);

        // Access elements using index
        for (int i = 0; i < myVector.size(); ++i) {
            std::cout << myVector[i] << " ";
        }

        return 0;
    }

  ```

#### 2️⃣ Lists :

- **Definition:**

  - Lists are doubly-linked lists that allow for constant time insertions and deletions from anywhere in the list.

- **Types :**

  ```cpp
    std::list<T> myList;  // where T is the type of elements in the list

  ```

- **Syntax :**

  ```cpp
    #include <list>

    std::list<T> myList;  // Declare a list
    myList.push_back(value);  // Add an element to the back
    myList.push_front(value);  // Add an element to the front

  ```

- **Example :**

  ```cpp
    #include <iostream>
    #include <list>

    int main() {
        // Declare a list of integers
        std::list<int> myList;

        // Add elements to the list
        myList.push_back(10);
        myList.push_back(20);
        myList.push_back(30);

        // Access elements using iterators
        for (auto it = myList.begin(); it != myList.end(); ++it) {
            std::cout << *it << " ";
        }

        return 0;
    }

  ```

#### 3️⃣ Queues :

- **Definition:**

  - Queues are a First In, First Out (FIFO) data structure. Elements are added at the back (enqueue) and removed from the front (dequeue).

- **Types :**

  ```cpp
    std::queue<T> myQueue;  // where T is the type of elements in the queue

  ```

- **Syntax :**

  ```cpp
    #include <queue>

    std::queue<T> myQueue;  // Declare a queue
    myQueue.push(value);  // Enqueue an element
    value = myQueue.front();  // Access the front element
    myQueue.pop();  // Dequeue an element

  ```

- **Example :**

  ```cpp
    #include <iostream>
    #include <queue>

    int main() {
        // Declare a queue of integers
        std::queue<int> myQueue;

        // Enqueue elements
        myQueue.push(10);
        myQueue.push(20);
        myQueue.push(30);

        // Dequeue elements
        while (!myQueue.empty()) {
            std::cout << myQueue.front() << " ";
            myQueue.pop();
        }

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
