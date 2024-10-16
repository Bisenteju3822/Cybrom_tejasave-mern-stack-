
#include <bits/stdc++.h>
using namespace std;
string swap(string str)
{
  int n = str.length();
  for (int i = 0; i < n / 2; i++)
  {
    swap(str[i], str[n - i - 1]);
  }
  return str;
}
int main()
{
  string str = "hello boy";
  cout << "swap :" << swap(str);
}