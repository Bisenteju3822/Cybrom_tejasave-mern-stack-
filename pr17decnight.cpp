#include <iostream>
using namespace std;

class top
{
  int a;
  int b;

  // Private member function (cannot be accessed outside the class)
  int sum(int x, int y)
  {
    a = x; // Using x and y parameters
    b = y;
    return a + b;
  }

public:
  // Public member function
  void sum(int x)
  {
    a = x;
    cout << a * a << endl;
  }

  // Public member function to access the private sum function
  int getSum(int x, int y)
  {
    return sum(x, y);
  }
};

class top2
{
  int c;
  int x;
};

int main()
{
  top ob;
  int result = ob.getSum(10, 20); // Accessing the private sum function through a public function
  cout << "Sum: " << result << endl;

  ob.sum(30); // Accessing the public sum function

  return 0;
}
