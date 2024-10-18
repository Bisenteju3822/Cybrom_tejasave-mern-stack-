#include <iostream>
#include <vector>
using namespace std;

void findMaxOR(const vector<int> &nums, int index, int currentOR, int &maxOR, int &count)
{
  if (index == nums.size())
  {
    if (currentOR > maxOR)
    {
      maxOR = currentOR;
      count = 1;
    }
    else if (currentOR == maxOR)
    {
      count++;
    }
    return;
  }

  findMaxOR(nums, index + 1, currentOR | nums[index], maxOR, count); // Include current element
  findMaxOR(nums, index + 1, currentOR, maxOR, count);               // Exclude current element
}

int countMaxORSubsets(vector<int> &nums)
{
  int maxOR = 0, count = 0;
  findMaxOR(nums, 0, 0, maxOR, count);
  return count;
}

int main()
{
  vector<int> nums1 = {3, 1};
  cout << "Output: " << countMaxORSubsets(nums1) << endl; // Output: 2

  vector<int> nums2 = {2, 2, 2};
  cout << "Output: " << countMaxORSubsets(nums2) << endl; // Output: 7

  vector<int> nums3 = {3, 2, 1, 5};
  cout << "Output: " << countMaxORSubsets(nums3) << endl; // Output: 6

  return 0;
}