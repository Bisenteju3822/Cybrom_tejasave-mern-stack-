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

    // Check if we can sort each group independently
    for (auto &group : bitGroups)
    {
      std::vector<int> &elements = group.second;
      std::vector<int> sortedElements = elements;
      std::sort(sortedElements.begin(), sortedElements.end());
      if (elements != sortedElements)
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
