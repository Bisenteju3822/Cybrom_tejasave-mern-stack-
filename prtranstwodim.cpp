#include <iostream>
using namespace std;

int main()
{
  const int x = 2;
  const int y = 2;
  int arr[x][y];

  // Input the elements of the array
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cin >> arr[i][j];
    }
  }

  // Print the original array
  cout << "Original array:" << endl;
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Check if the array is square
  if (x == y)
  {
    // Transpose the array
    cout << "After transpose:" << endl;
    for (int j = 0; j < x; j++)
    {
      for (int i = 0; i < y; i++)
      {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "The matrix is not square; transpose is not possible." << endl;
  }

  return 0;
}
