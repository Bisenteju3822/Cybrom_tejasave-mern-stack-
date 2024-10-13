#include <iostream>
using namespace std;

int main()
{
  int rows = 3;
  int cols = 3;
  int arr[3][3] = {
      {1, 2, 2},
      {7, 1, 6},
      {7, 2, 1}};

  bool sameDiagonal = false;

  for (int i = 0; i < rows - 1; i++)
  { // Avoid out-of-bounds access
    for (int j = 0; j < cols - 1; j++)
    { // Avoid out-of-bounds access
      if (arr[i][j] == arr[i + 1][j + 1])
      {
        cout << "Elements at (" << i << "," << j << ") and (" << (i + 1) << "," << (j + 1) << ") are the same: " << arr[i][j] << endl;
        sameDiagonal = true;
        break;
      }
    }
    if (sameDiagonal)
    {
      break;
    }
  }

  if (!sameDiagonal)
  {
    cout << "No same diagonal elements found." << endl;
  }

  return 0;
}