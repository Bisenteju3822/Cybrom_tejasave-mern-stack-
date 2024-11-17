#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {2, 0, 4, 0, 0, 7};
  int shift = arr[0];
  int index = 0;
  int n = 6;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      arr[index++] = arr[i];
    }
  }
  while (index < n)
  {
    arr[index++] = 0;
  }
  for (int j = 0; j < n; j++)
  {
    cout << arr[j] << " ";
  }
  cout << endl;

  return 0;
}