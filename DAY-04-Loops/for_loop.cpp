#include <iostream>
using namespace std;

int main()
{
  // Fibonacci sequence using a for loop

  int term1 = 0, term2 = 1;

  cout << term1 << " " << term2 << " ";

  for (int i = 2; i < 10; i++)
  {
    int nextTerm = term1 + term2;
    cout << nextTerm << " ";

    term1 = term2;
    term2 = nextTerm;
  }

  cout << endl;

  return 0;
}
