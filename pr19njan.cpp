#include <iostream>
using namespace std;
void sum(int arr[], int s)
{
  if (s == 0)
  {
    cout << "not ood" << endl;
  }
  else
  {
    for (int i = 0; i <= s; i++)
    {
      cout << INT_MIN << endl;
    }
  }
}
int main()
{
  int arr[] = {2, 3, 4, 56, 67};
  int size = sizeof(arr) / sizeof(arr[0]);
  sum(arr, size);

  return 0;
}
