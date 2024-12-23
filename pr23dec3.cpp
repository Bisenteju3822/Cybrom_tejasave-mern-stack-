#include <iostream>
using namespace std;

class Overload
{
public:
  void factorial(int a)
  {
    int sum = 1;
    while (a != 0)
    {
      sum = sum * a;
      a--; // Decrement the value of a
    }
    cout << "Factorial of number: " << sum << endl;
  }
};

class N2
{
  Overload ob;

public:
  void table(int a)
  {
    int i = 1;
    while (i <= 10)
    { // Loop should run up to and including 10
      cout << a << " * " << i << " = " << a * i << endl;
      i++;
    }
    ob.factorial(a);
  }
};

int main()
{
  int a;
  cout << "Enter a value: ";
  cin >> a;
  N2 ob;
  ob.table(a);

  return 0;
}