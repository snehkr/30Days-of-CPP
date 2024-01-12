#include <iostream>
using namespace std;

class Data
{
private:
  int value;

public:
  void setValue(int newValue)
  {
    value = newValue;
  }

  int getValue() const
  {
    return value;
  }
};

int main()
{

  Data data;
  data.setValue(5);
  cout << data.getValue() << endl;

  return 0;
}