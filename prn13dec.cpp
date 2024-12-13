#include <iostream>
using namespace std;

int fib(int n)
{
  if (n <= 1)
  {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int sumFib(int n)
{
  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
    sum += fib(i);
  }
  return sum;
}

int main()
{
  int n;
  cout << "Enter your number" << endl;
  cin >> n;
  cout << "Sum of first " << n << " Fibonacci numbers is: " << sumFib(n) << endl;
  return 0;
}
