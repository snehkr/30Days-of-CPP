## 📅 TRACK DAYS: 04 of 30

## `✅ Day 04 : Loops`

</br>

## 📑 Contents :

- C++ Loops
  - `for`
  - `while`
  - `do-while`

</br>

### 1️⃣ for loop:

- **Definition:** The for loop is used when you know in advance how many times you want to execute a block of code.

- **Syntax:**

  ```cpp
  for (initialization; condition; update) { /* code to be executed */ }
  ```

- **Usage:** It's commonly used when you have a clear starting point, a condition to check for continuation, and an update statement.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  for (int i = 0; i < 5; i++) {
    cout << "Iteration: " << i << endl;
  }
  ```

### 2️⃣ while loop:

- **Definition:** The while loop is used when the number of iterations is not known in advance, and the loop continues as long as a specified condition is true.

- **Syntax:**

  ```cpp
  while (condition) { /* code to be executed */ }
  ```

- **Usage:** It's suitable when you want to repeatedly execute a block of code as long as a certain condition holds true.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  int i = 0;
  while (i < 5) {
      cout << "Iteration: " << i << endl; i++;
    }
  ```

### 3️⃣ do-while loop:

- **Definition:** The do-while loop is similar to the while loop, but it guarantees that the block of code is executed at least once before checking the loop condition.

- **Syntax:**

  ```cpp
  do { /* code to be executed */ } while (condition);
  ```

- **Usage:** It's useful when you want to ensure that a block of code is executed at least once, regardless of the condition.

- **Example:**

  ```cpp
  #include <iostream>
  using namespace std;

  int i = 0;
  do {
      cout << "Iteration: " << i << endl; i++;
    } while (i < 5);

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
