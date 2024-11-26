#include <iostream>
using namespace std;

int main()
{
  string str = "hello boy";
  int count = 0;
  int len = str.length();
  int i = len - 1; // Initialize i to the last index of the string

  while (i >= 0)
  {
    i--; // Decrement i
    count += 1;

    cout << "count: " << count << endl;
  }

  cout << "Original String: " << str << endl;
  cout << "Reversed String: ";
  for (int j = len - 1; j >= 0; j--)
  {
    cout << str[j];
  }
  cout << endl;

  return 0;
}
