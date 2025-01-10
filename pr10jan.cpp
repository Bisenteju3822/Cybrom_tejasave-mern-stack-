#include <vector>

class Solution
{
public:
  std::vector<int> searchRange(std::vector<int> &nums, int target)
  {
    std::vector<int> result(2, -1);

    result[0] = findFirstPosition(nums, target);
    result[1] = findLastPosition(nums, target);

    return result;
  }

private:
  int findFirstPosition(const std::vector<int> &nums, int target)
  {
    int left = 0, right = nums.size() - 1;
    int firstPosition = -1;

    while (left <= right)
    {
      int mid = left + (right - left) / 2;

      if (nums[mid] >= target)
      {
        right = mid - 1;
      }
      else
      {
        left = mid + 1;
      }

      if (nums[mid] == target)
      {
        firstPosition = mid;
      }
    }

    return firstPosition;
  }

  int findLastPosition(const std::vector<int> &nums, int target)
  {
    int left = 0, right = nums.size() - 1;
    int lastPosition = -1;

    while (left <= right)
    {
      int mid = left + (right - left) / 2;

      if (nums[mid] <= target)
      {
        left = mid + 1;
      }
      else
      {
        right = mid - 1;
      }

      if (nums[mid] == target)
      {
        lastPosition = mid;
      }
    }

    return lastPosition;
  }
};
