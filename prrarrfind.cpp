#include <iostream>
using namespace std;

int main()
{
  int rows = 3;
  int cols = 2;
  int arr[3][2] = {
      {1, 2},
      {4, 5},
      {9, 4}};
  int arr1[3][2] = {
      {1, 2},
      {4, 5},
      {9, 4}};
  int find;
  cin >> find;
  int store[3][2]; // Array to hold the multiplied values

  // Multiplying the arrays element-wise
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (find == arr[i][j])
      {
        cout << "It is in array";
        break;
      }
    }
  }

  // Printing the resultant array

  return 0;
}
