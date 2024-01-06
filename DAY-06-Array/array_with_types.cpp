#include <iostream>
using namespace std;

int main()
{
  // One-Dimensional Array
  int numbers[5] = {1, 2, 3, 4, 5};

  // Accessing and printing elements of a one-dimensional array
  cout << "One-Dimensional Array:" << endl;
  for (int i = 0; i < 5; ++i)
  {
    cout << numbers[i] << " ";
  }
  cout << "\n\n";

  // Multidimensional Array (2D)
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  // Accessing and printing elements of a two-dimensional array
  cout << "Two-Dimensional Array:" << endl;
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";

  // Character Array (String)
  char greeting[] = "Hello.Sneh";

  // Accessing and printing characters of a character array
  cout << "Character Array (String):" << endl;
  for (int i = 0; greeting[i] != '\0'; ++i)
  {
    cout << greeting[i] << " ";
  }
  cout << "\n";

  return 0;
}
