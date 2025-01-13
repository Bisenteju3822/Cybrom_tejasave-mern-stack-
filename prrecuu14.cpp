
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
  if (n <= 1) // Base case
    return 1;
  else // Recursive case
    return n * factorial(n - 1);
}

int main()
{
  int number;
  cout << "Enter a positive integer: ";
  cin >> number;
  cout << "Factorial of " << number << " is " << factorial(number) << endl;
  return 0;
}
