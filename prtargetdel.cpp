#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {4, 4, 3, 5, 7, 8};
  int val = 4;
  int n = 6;
  int index = 0;
  int len = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != val)
    {
      arr[index++] = arr[i];
      cout << arr[i] << endl;
      len = len + 1;
    }
  }
  cout << len << "len" << endl;

  return 0;
}