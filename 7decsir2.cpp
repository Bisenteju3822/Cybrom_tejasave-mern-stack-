#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int uniqueArr[n];
  int uniqueIndex = 0;

  cout << "Duplicate elements in the array are: ";

  int i = 0;
  while (i < n)
  {
    int j = 0;
    bool isDuplicate = false;

    while (j < i)
    {
      if (arr[i] == arr[j])
      {
        isDuplicate = true;
        break;
      }
      j++;
    }

    if (isDuplicate)
    {
      cout << arr[i] << " ";
    }
    else
    {
      uniqueArr[uniqueIndex++] = arr[i];
    }
    i++;
  }

  cout << endl
       << "Unique elements are: ";
  i = 0;
  while (i < uniqueIndex)
  {
    cout << uniqueArr[i] << " ";
    i++;
  }
  cout << endl;

  return 0;
}