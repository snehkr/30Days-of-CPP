#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream outputFile("example.txt");

  if (!outputFile)
  {
    cerr << "Error opening output file." << endl;
    return 1;
  }

  int value = 42;
  outputFile << value;

  outputFile.close();

  return 0;
}
