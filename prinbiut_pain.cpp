#include <bits/stdc++.h>
using namespace std;

bool palindrom(int x)
{
  string str_x = to_string(x);
  string reversed_str_x = str_x;
  reverse(reversed_str_x.begin(), reversed_str_x.end()); // Correct usage of reverse
  return str_x == reversed_str_x;
}

int main()
{
  int x;
  cout << "Enter a number: ";
  cin >> x;

  if (palindrom(x))
  {
    cout << "It is a palindrome" << endl;
  }
  else
  {
    cout << "Not a palindrome" << endl;
  }

  return 0;
}