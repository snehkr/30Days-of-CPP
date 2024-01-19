#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream file("example.txt", ios::in | ios::out);

  if (!file)
  {
    cerr << "Error opening file." << endl;
    return 1;
  }

  int value;
  file >> value;
  cout << "Read value from file: " << value << endl;

  // Writing to the file
  file.seekp(0, ios::beg); // Move the write pointer to the beginning
  file << 100;

  file.close();

  return 0;
}
