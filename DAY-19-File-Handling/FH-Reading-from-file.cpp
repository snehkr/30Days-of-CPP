#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream inputFile("example.txt");

  if (!inputFile)
  {
    cerr << "Error opening input file." << endl;
    return 1;
  }

  int value;
  inputFile >> value;
  cout << "Read value from file: " << value << endl;

  inputFile.close();

  return 0;
}
