#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.empty())
      return 0;

    int unique_count = 1; // Start with the first element
    for (int i = 1; i < nums.size(); ++i)
    {
      if (nums[i] != nums[i - 1])
      {
        nums[unique_count] = nums[i]; // Place unique element in position
        unique_count++;
      }
    }
    return unique_count;
  }
};

int main()
{
  Solution solution;

  // Example 1
  vector<int> nums1 = {1, 1, 2};
  int k1 = solution.removeDuplicates(nums1);
  cout << "Output: " << k1 << ", nums = [";
  for (int i = 0; i < k1; ++i)
  {
    cout << nums1[i] << (i < k1 - 1 ? ", " : "");
  }
  cout << "]" << endl;

  // Example 2
  vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int k2 = solution.removeDuplicates(nums2);
  cout << "Output: " << k2 << ", nums = [";
  for (int i = 0; i < k2; ++i)
  {
    cout << nums2[i] << (i < k2 - 1 ? ", " : "");
  }
  cout << "]" << endl;

  return 0;
}
