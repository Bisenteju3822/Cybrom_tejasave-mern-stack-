#include <iostream>
using namespace std;
void bubblesort(int arr[], int s)
{
  for (int i = 0; i < s; i++)
  {
    for (int j = 0; j < s - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < s; i++)
  {
    cout << "arrange using bubble sort:" << arr[i] << endl;
  }
}
int main()
{
  int s;
  cout << "enter the value" << endl;
  cin >> s;
  int arr[s];
  s = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < s; i++)
  {
    cin >> arr[i];
  }
  bubblesort(arr, s);

  return 0;
}
