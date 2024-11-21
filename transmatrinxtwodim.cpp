#include <iostream>
using namespace std;

int main()
{
  int n, m, temp;
  cout << "Enter n value: ";
  cin >> n;
  cout << "Enter m value: ";
  cin >> m;

  if (n == m)
  {
    int arr[n][m];

    cout << "M and N are equal" << endl;
    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cin >> arr[i][j];
      }
    }

    cout << "The original array is:" << endl;
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }

    // Transpose the matrix
    for (int i = 0; i < n; ++i)
    {
      for (int j = i + 1; j < m; ++j)
      {
        temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
      }
    }

    cout << "The transposed array is:" << endl;
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "M and N are not equal" << endl;
  }

  return 0;
}