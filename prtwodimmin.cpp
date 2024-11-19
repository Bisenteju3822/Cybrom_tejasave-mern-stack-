#include <iostream>
using namespace std;
int main()
{
  int arr[2][3];
  int min = arr[0][0];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] < min)
      {
        min = arr[i][j];
      }
      cout << endl;
    }
  }
  cout << "mimimum==" << min << endl;

  return 0;
}