#include <iostream>
using namespace std;

bool prime(int n)
{
  if (n <= 1)
  {
    return false;
  }
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

void wprime(bool (*primeFunc)(int), int n, int arr[])
{
  for (int i = 0; i < n; i++)
  {
    if (primeFunc(arr[i]))
    {
      cout << arr[i] << " is prime" << endl;
    }
    else
    {
      cout << arr[i] << " is not prime" << endl;
    }
  }
}

int main()
{
  int arr[5];
  int n = 5;
  cout << "Enter 5 numbers:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  wprime(prime, n, arr);
  return 0;
}