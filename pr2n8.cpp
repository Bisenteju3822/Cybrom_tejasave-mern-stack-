#include <iostream>
using namespace std;

class mxmin
{
  int a, b;

public:
  friend void maxmin(int a, int b);
};

void maxmin(int a, int b)
{
  a = a - b;
  b = a + b;
  (a > b) ? cout << "a is greater" : cout << "b is greater";
}

int main()
{
  mxmin obj;    // Define the object
  maxmin(5, 3); // Call the friend function with example values
  return 0;
}
