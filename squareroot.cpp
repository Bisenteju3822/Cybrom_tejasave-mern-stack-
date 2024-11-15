#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {24, 34, 64, 54, 84};

  // Print all elements in the array
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }

  // Find and print the integer square roots of elements if they exist
  for (int i = 0; i < 5; i++)
  {
    int j = arr[i];
    bool found = false;

    for (int s = 0; s * s <= j; s++)
    {
      if (s * s == j)
      {
        cout << "The integer square root of " << j << " is " << s << endl;
        found = true;
        break;
      }
    }

    if (!found)
    {
      cout << j << " does not have an integer square root." << endl;
    }
  }

  return 0;
}
