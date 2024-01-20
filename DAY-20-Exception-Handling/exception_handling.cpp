#include <iostream>
#include <stdexcept>
#include <ctime>

using namespace std;

// Function to calculate age
int calculateAge(int birthYear)
{
  // Get the current year
  time_t t = time(nullptr);
  tm *now = localtime(&t);
  int currentYear = now->tm_year + 1900;

  // Check if the birth year is valid
  if (birthYear < 1900 || birthYear > currentYear)
  {
    throw out_of_range("Invalid birth year");
  }

  // Calculate and return the age
  return currentYear - birthYear;
}

int main()
{
  try
  {
    // Get user input for birth year
    cout << "Enter your birth year: ";
    int birthYear;
    cin >> birthYear;

    // Calculate and display age
    int age = calculateAge(birthYear);
    cout << "Your age is: " << age << " years." << endl;
  }
  catch (const out_of_range &e)
  {
    // Handle out_of_range exception
    cerr << "Error: " << e.what() << endl;
  }
  catch (const exception &e)
  {
    // Catch any other exceptions
    cerr << "An unexpected error occurred: " << e.what() << endl;
  }

  return 0;
}
