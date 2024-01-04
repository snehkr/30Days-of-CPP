#include <iostream>
using namespace std;

int main()
{
  // A do-while loop for summing numbers

  char choice;
  do
  {
    double number, sum = 0;
    int count = 0;
    cout << "Enter numbers to sum:\n";

    do
    {
      cout << "Enter a number (or 0 to stop): ";
      cin >> number;

      if (number != 0)
      {
        sum += number;
        count++;
      }

    } while (number != 0);

    cout << "Sum: " << sum << endl;
    if (count > 0)
    {
      double average = sum / count;
      cout << "Average: " << average << endl;
    }
    else
    {
      cout << "No numbers entered.\n";
    }

    cout << "Do you want to enter another sequence? (y/n): ";
    cin >> choice;

  } while (choice == 'y' || choice == 'Y');

  cout << "Goodbye!\n";

  return 0;
}
