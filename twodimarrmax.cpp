#include <iostream>
using namespace std;

int main()
{
  int arr[2][3];

  // Input the elements of the array
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  int max = arr[0][0];

  // Initialize max to the first element in the array after it's populated

  // Find the maximum element in the array
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] > max)
      {
        max = arr[i][j];
      }
    }
  }

  // Print the maximum element
  cout << "maximum = " << max << endl;

  return 0;
}