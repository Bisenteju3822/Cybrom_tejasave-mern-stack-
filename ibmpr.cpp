#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'meanderingArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY unsorted as parameter.
 */
vector<int> meanderingArray(vector<int> unsorted)
{
  vector<int> result;
  sort(unsorted.begin(), unsorted.end());

  int left = 0;
  int right = unsorted.size() - 1;

  while (left <= right)
  {
    if (left <= right)
    {
      result.push_back(unsorted[right--]);
    }
    if (left <= right)
    {
      result.push_back(unsorted[left++]);
    }
  }

  return result;
}

int main()
{
  int unsorted_count;
  cin >> unsorted_count;
  vector<int> unsorted(unsorted_count);
  for (int i = 0; i < unsorted_count; i++)
  {
    cin >> unsorted[i];
  }

  vector<int> result = meanderingArray(unsorted);

  // Print the result with specified formatting
  for (size_t i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }

  return 0;
}
