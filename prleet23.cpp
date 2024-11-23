class Solution
{
public:
  bool isPalindrome(int x)
  {
    // Negative numbers are not palindromes
    if (x < 0)
    {
      return false;
    }

    // Convert the number to a string
    std::string str_x = std::to_string(x);

    // Check if the string is equal to its reverse
    std::string reversed_str_x(str_x.rbegin(), str_x.rend());
    return str_x == reversed_str_x;
  }
};
