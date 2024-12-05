#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 4, 1, 9, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  if (n < 2)
  {
    cout << "Array must contain at least two elements." << endl;
    return 0;
  }

  int first = INT_MIN, second = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > first)
    {
      second = first;
      first = arr[i];
    }
    else if (arr[i] > second && arr[i] != first)
    {
      second = arr[i];
    }

    if (second == INT_MIN)
    {
      cout << "There is no second highest element." << endl;
    }
    else
    {
      cout << "The second highest element is " << second << endl;
    }

    return 0;
  }