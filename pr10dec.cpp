//// program of multiplr function
#include <iostream>
using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int sub(int a)
{
  return a * a;
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << sum(a, b) << endl;
  cout << sub(a) << endl;

  return 0;
}