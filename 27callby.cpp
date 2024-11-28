#include <iostream>
using namespace std;
int fun(int x)
{
  x = 5;
  return x;
}
int main()
{
  int a = 10;
  int b = fun(a);
  cout << a;
  cout << b;

  return 0;
}
