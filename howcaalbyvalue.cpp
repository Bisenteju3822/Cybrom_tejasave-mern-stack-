#include <iostream>
using namespace std;

void modifyValue(int a)
{
  a = 10;
  cout << a << endl; // Changes local copy
}

int main()
{
  int x = 5;
  modifyValue(x);
  cout << "Value of x: " << x << endl; // Output: Value of x: 5
  return 0;
}
