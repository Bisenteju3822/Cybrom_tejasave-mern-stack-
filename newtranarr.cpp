#include <iostream>
using namespace std;

int main()
{
  int rows = 3;
  int cols = 3;
  int arr[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  int transposed[3][3]; // Array to hold the transposed values

  // Transposing the array
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      transposed[j][i] = arr[i][j];
    }
  }

  // Printing the transposed array
  cout << "Transposed array:" << endl;
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      cout << transposed[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
