#include <iostream>

// Recursive function to calculate factorial
int factorial(int n)
{
  if (n <= 1)
  {
    return 1; // Base case: factorial of 0 or 1 is 1
  }
  return n * factorial(n - 1); // Recursive call
}

int main()
{
  int number;
  std::cout << "Enter a positive integer: ";
  std::cin >> number;

  std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;

  return 0;
}
