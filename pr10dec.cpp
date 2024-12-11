//// program of overloading function
#include <iostream>
using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int sum(int a)
{
  return a * a;
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << sum(a, b) << endl;
  cout << sum(a) << endl;

  return 0;
}