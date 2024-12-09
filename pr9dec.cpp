#include <iostream>
using namespace std;

int sbi(int a, int b)
{
  return 20000;
}

int axis(int a, int b)
{
  return 40000;
}

int main()
{
  int (*ptr)(int, int); // Declare a function pointer
  int a = 0;
  int b = 0;

  ptr = sbi;                    // Poi
  cout << (*ptr)(a, b) << endl; // Call the function via the pointer

  ptr = axis;                   // Point to the axis function
  cout << (*ptr)(a, b) << endl; // Call the function via the pointer

  return 0;
}