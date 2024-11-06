#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Solution
{
public:
  bool canSortArray(std::vector<int> &nums)
  {
    // Group numbers by their number of set bits
    std::map<int, std::vector<int>> bitGroups;
    for (int num : nums)
    {
      int bits = countSetBits(num);
      bitGroups[bits].push_back(num);
    }

    // Check if each group is sorted
    for (auto &group : bitGroups)
    {
      if (!std::is_sorted(group.second.begin(), group.second.end()))
      {
        return false;
      }
    }
    return true;
  }

private:
  int countSetBits(int num)
  {
    return __builtin_popcount(num); // Use GCC built-in function
  }
};

int main()
{
  Solution sol;

  std::vector<int> nums1 = {8, 4, 2, 30, 15};
  std::vector<int> nums2 = {1, 2, 3, 4, 5};
  std::vector<int> nums3 = {3, 16, 8, 4, 2};

  std::cout << std::boolalpha;
  std::cout << "Can sort nums1: " << sol.canSortArray(nums1) << std::endl;
  std::cout << "Can sort nums2: " << sol.canSortArray(nums2) << std::endl;
  std::cout << "Can sort nums3: " << sol.canSortArray(nums3) << std::endl;

  return 0;
}
