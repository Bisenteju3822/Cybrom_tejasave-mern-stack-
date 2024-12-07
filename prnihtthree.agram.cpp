#include <iostream>
using namespace std;

int main()
{
  string str1, str2;

  cout << "Enter your first string 1: ";
  cin >> str1;

  cout << "Enter your second string 2: ";
  cin >> str2;

  // Check if strings are of the same length
  if (str1.length() != str2.length())
  {
    cout << "The strings do not have the same length and therefore cannot contain the same characters." << endl;
    return 0;
  }

  // Initialize count arrays to store the frequency of characters
  int count1[256] = {0}; // Assuming ASCII character set
  int count2[256] = {0}; // Assuming ASCII character set

  // Count characters in str1
  for (int i = 0; i < str1.length(); i++)
  {
    count1[(unsigned char)str1[i]]++;
  }

  // Count characters in str2
  for (int i = 0; i < str2.length(); i++)
  {
    count2[(unsigned char)str2[i]]++;
  }

  // Compare character counts
  for (int i = 0; i < 256; i++)
  {
    if (count1[i] != count2[i])
    {
      cout << "The strings do not contain the same characters." << endl;
      return 0;
    }
  }

  cout << "The strings contain the same characters." << endl;

  return 0;
}