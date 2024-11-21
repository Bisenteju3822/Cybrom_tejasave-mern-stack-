#include <iostream>

int main()
{
  int digit[] = {1, 2, 3};
  int size = sizeof(digit) / sizeof(digit[0]);

  // Shifting elements to the right
  for (int i = size; i > 0; --i)
  {
    digit[i] = digit[i - 1];
  }

  // Optionally set the first element to a new value
  digit[0] = 1;

  // Print the array
  for (int i = 0; i < size; ++i)
  {
    std::cout << digit[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
