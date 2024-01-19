## 📅 TRACK DAYS: 19 of 30

## `✅ Day 19 : File Handling`

</br>

## 📑 Contents :

- File Handling
  - Definitions
  - Operations
  - Syntax
  - Examples

</br>

### 📂 File Handling

- **Definition:**

  - File handling in C++ involves operations on files, such as reading data from files or writing data to files.

  - C++ provides the <fstream> header, which contains three classes for file handling:

    - ifstream (for input operations)
    - ofstream (for output operations)
    - fstream (for both input and output operations)

### 🗃️ File Handling Definitions:

1. Input File Stream (ifstream):

   - Used for reading data from files.
   - Objects of this class are associated with input files.

2. Output File Stream (ofstream):

   - Used for writing data to files.
   - Objects of this class are associated with output files.

3. File Stream (fstream):

   - Supports both input and output operations.
   - Objects of this class can be associated with both input and output files.

### 🗃️ File Handling Syntax:

#### 1️⃣ Opening a File :

```cpp

ifstream inputFile("example.txt");   // For reading
ofstream outputFile("example.txt");  // For writing
fstream file("example.txt", ios::in | ios::out);  // For both

```

#### 2️⃣ Checking if the File is Open :

```cpp

if (!inputFile) {
    cerr << "Error opening input file." << endl;
    return 1;
}

```

#### 3️⃣ Reading from a File :

```cpp

int value;
inputFile >> value;


```

#### 4️⃣ Writing to a File :

```cpp

int value = 42;
outputFile << value;

```

#### 5️⃣ Closing a File :

```cpp

inputFile.close();
outputFile.close();
file.close();

```

### 🗃️ File Handling Examples:

#### 1️⃣ Reading from a File :

```cpp

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("example.txt");

    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    int value;
    inputFile >> value;
    cout << "Read value from file: " << value << endl;

    inputFile.close();

    return 0;
}

```

#### 2️⃣ Writing to a File :

```cpp

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("example.txt");

    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    int value = 42;
    outputFile << value;

    outputFile.close();

    return 0;
}

```

#### 3️⃣ Reading and Writing to a File (fstream) :

```cpp

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("example.txt", ios::in | ios::out);

    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int value;
    file >> value;
    cout << "Read value from file: " << value << endl;

    // Writing to the file
    file.seekp(0, ios::beg);  // Move the write pointer to the beginning
    file << 100;

    file.close();

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
