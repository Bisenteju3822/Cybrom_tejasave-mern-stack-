#include <iostream>
using namespace std;

class top
{
public:
  static int a;
  static int b;
  static void sum()
  {
    a = 10;
    b = 20;
    cout << a + b << endl;
  }
};

int top::a; // Define the static member variable
int top::b; // Define the static member variable

int main()
{
  top ob;     // Creating an object of the class
  ob.sum();   // Calling the static function using an object
  top::sum(); // Calling the static function using the class name

  return 0;
}
