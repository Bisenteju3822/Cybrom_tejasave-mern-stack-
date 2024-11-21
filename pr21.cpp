#include <iostream>

void increment(int digits[], int &size)
{
  for (int i = size - 1; i >= 0; --i)
  {
    if (digits[i] < 9)
    {
      digits[i]++;
      return;
    }
    digits[i] = 0;
  }
  // If we reach here, it means all digits were 9
  for (int i = size; i > 0; --i)
  {
    digits[i] = digits[i - 1];
  }
  digits[0] = 1;
  size++;
}

void printDigits(const int digits[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    std::cout << digits[i];
  }
  std::cout << std::endl;
}

int main()
{
  int digits[100] = {1, 2, 3}; // Example array with room for carry
  int size = 3;                // Initial size of the digits array

  std::cout << "Original number: ";
  printDigits(digits, size);

  increment(digits, size);

  std::cout << "After increment: ";
  printDigits(digits, size);

  return 0;
}