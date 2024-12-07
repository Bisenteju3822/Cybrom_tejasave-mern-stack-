#include <iostream>
#include <cstring> // For strcmp
using namespace std;

bool isPalindrome(char *str)
{
  int len = strlen(str);
  char reverse[100]; // Assuming a max length of 100 for the reversed string
  int index = 0;

  // Create the reverse of the input string
  for (int i = len - 1; i >= 0; i--)
  {
    reverse[index++] = str[i];
  }
  reverse[index] = '\0'; // Null-terminate the reversed string

  // Compare original and reversed string
  if (strcmp(str, reverse) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  char str[100]; // Assuming max length of the string is 100
  cout << "Enter a string: ";
  cin >> str;

  if (isPalindrome(str))
  {
    cout << str << " is a palindrome." << endl;
  }
  else
  {
    cout << str << " is not a palindrome." << endl;
  }

  return 0;
}