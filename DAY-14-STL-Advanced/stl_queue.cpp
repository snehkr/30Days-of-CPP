#include <iostream>
#include <queue>

int main()
{
  // Declare a queue of integers
  std::queue<int> myQueue;

  // Enqueue elements
  myQueue.push(10);
  myQueue.push(20);
  myQueue.push(30);

  // Dequeue elements
  std::cout << "Queue Elements: ";
  while (!myQueue.empty())
  {
    std::cout << myQueue.front() << " ";
    myQueue.pop();
  }

  return 0;
}
