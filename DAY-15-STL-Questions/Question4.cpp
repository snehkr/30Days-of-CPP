#include <iostream>
#include <stack>

int main()
{
  // Create a stack of integers
  std::stack<int> numberStack;

  // Push elements onto the stack
  numberStack.push(10);
  numberStack.push(20);
  numberStack.push(30);

  // Pop and print elements from the stack
  while (!numberStack.empty())
  {
    std::cout << numberStack.top() << " ";
    numberStack.pop();
  }

  return 0;
}
