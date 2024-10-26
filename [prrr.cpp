#include <iostream>
using namespace std;

int main()
{
  int n = 3; // Number of rows
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j > i; j--)
    {
      cout << " "; // Print leading spaces
    }
    for (int c = 1; c <= i; c++)
    {
      cout << "*"; // Print asterisks
    }
    cout << endl;
  }
  return 0;
}
