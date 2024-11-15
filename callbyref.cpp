#include <iostream>
using namespace std;

void modifyValue(int &a)
{
  a = 10; // Changes the actual variable
}

int main()
{
  int x = 5;
  modifyValue(x);
  cout << "Value of x: " << x << endl; // Output: Value of x: 10
  return 0;
}
