#include <iostream>
using namespace std;
int factorial(int a)
{
  if (a == 0)
  {
    return 1;
  }
  return a * factorial(a - 1);
}
int main()
{
  int a;
  cout << "Enter your number::";
  cin >> a;

  factorial(a);
  cout << "factorial of number ::" << factorial(a) << endl;
}