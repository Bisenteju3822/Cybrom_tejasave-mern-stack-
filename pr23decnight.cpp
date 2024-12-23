#include <iostream>
using namespace std;

class MathOperations
{
public:
  static int gcd(int a, int b)
  {
    while (b != 0)
    {
      int temp = b;
      b = a % b;
      a = temp;
    }
    return a;
  }

  static int lcm(int a, int b)
  {
    return (a * b) / gcd(a, b);
  }
};

int main()
{
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  int gcdResult = MathOperations::gcd(a, b);
  int lcmResult = MathOperations::lcm(a, b);

  cout << "GCD of " << a << " and " << b << " is: " << gcdResult << endl;
  cout << "LCM of " << a << " and " << b << " is: " << lcmResult << endl;

  return 0;
}