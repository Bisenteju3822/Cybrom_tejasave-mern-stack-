#include <iostream>
using namespace std;
int fun(int &x)
{
  int b = 5;
  return b;
}
int main()
{
  int a = 10;
  fun(b);
  cout << a;
  cout << b;

  return 0;
}