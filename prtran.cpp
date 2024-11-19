#include <iostream>
using namespace std;
int main()
{
  int i, j;
  int arr[2][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {

      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  if (i == j)
  {

    cout << "after transpose---->" << endl;
    for (int j = 0; j < 2; j++)
    {
      for (int i = 0; i < 2; i++)
      {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }

    return 0;
  }
}
else
{
  cout << "i and j is not equal"
}