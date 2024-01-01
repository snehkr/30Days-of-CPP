// Programmer: Sneh Kr
// Date: January 01 2024
// Purpose: My first C++ program

#include <iostream> // This header is used for input and output operations. It provides functionality for reading from and writing to streams, such as std::cin and std::cout.
#include <thread>   // This header is used for working with multithreading in C++. It provides classes and functions for creating and managing threads.
#include <chrono>   // This header is part of the C++11 standard and provides facilities for performing time-related operations. It includes various duration and time point classes, allowing you to measure time intervals and work with time points.

using namespace std;

int main()
{

  string newString = "Hello Sneh, Welcome to the World of CPP!";
  for (char newChar : newString)
  {
    cout << newChar;
    this_thread::sleep_for(chrono::milliseconds(200));
  }

  cout << endl;
  return 0;
}
