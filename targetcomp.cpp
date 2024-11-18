#include <iostream>
using namespace std;

int main()
{
  int nums[] = {1, 0, -1, 0, -2, 2};
  int target = 0;
  int n = sizeof(nums) / sizeof(nums[0]);

  // Iterate over all combinations of four elements
  for (int i = 0; i < n - 3; i++)
  {
    for (int j = i + 1; j < n - 2; j++)
    {
      for (int k = j + 1; k < n - 1; k++)
      {
        for (int l = k + 1; l < n; l++)
        {
          if (nums[i] + nums[j] + nums[k] + nums[l] == target)
          {
            // Print the quadruplet
            cout << "[" << nums[i] << ", " << nums[j] << ", " << nums[k] << ", " << nums[l] << "]" << endl;
          }
        }
      }
    }
  }

  return 0;
}
