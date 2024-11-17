#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {2, 4, 3, 4, 4, 3};
  int n = 6;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        for (int k = j; k < n - 1; k++)
        {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
  }
  for (int z = 0; z < n; z++)
  {
    cout << arr[z] << " ";
  }
  cout << endl;
}