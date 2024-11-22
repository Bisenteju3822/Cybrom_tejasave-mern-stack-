#include <iostream>
using namespace std;
int main()
{
  int arr1[2][2];
  int arr2[2][3];
  int arr3[2][3];
  int x, y;
  int sum;
  cout << "Enter the value of X" << endl;
  cin >> x;
  cout << "Enter the value of Y" << endl;
  cin >> y;

  if (x == y)
  {
    int arr1[2][x];
    int arr2[y][3];

    cout << "enter a arr1[1]" << endl;
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < x; j++)
      {
        cin >> arr1[i][j];
      }
    }
    cout << "enter a arr2[2]" << endl;

    for (int i = 0; i < y; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cin >> arr2[i][j];
      }
    }
    cout << "value of arr1[1]" << endl;

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < x; j++)
      {
        cout << arr1[i][j] << endl;
      }
    }
    cout << "value of arr2[1]" << endl;

    for (int i = 0; i < y; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << arr2[i][j] << endl;
      }
    }
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        for (int k = 0; k < x; k++)
        {
          sum += arr1[i][k] * arr2[k][j];
        }
        arr3[i][j] = sum;
        cout << arr3[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "THE COLUMN OF THE FIRST ARRAY IS NOT EQUAL TO SECOND ARRAY ROW" << endl;
  }

  return 0;
}
