#include <iostream>
using namespace std;

int main()
{
  int arr[4] = {3, 1, 2, 4};
  int n = 4;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      swap(arr[i], arr[i + 1]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}
