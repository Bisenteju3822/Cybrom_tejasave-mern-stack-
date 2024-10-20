
#include <iostream>
using namespace std;

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n; // Base case
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
  }
}

int main()
{
  int num;
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    cout << fibonacci(i) << " ";
  }
  cout << endl;
  return 0;
}
