#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[5];
  int n = 5;
  int first = INT_MIN;
  int second = INT_MIN;

  // Input array elements
  cout << "Enter 5 elements:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Find the first and second highest elements
  for (int j = 0; j < n; j++)
  {
    if (arr[j] > first)
    {
      second = first;
      first = arr[j];
    }
    else if (arr[j] > second && arr[j] != first)
    {
      second = arr[j];
    }
  }

  // Print the results
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