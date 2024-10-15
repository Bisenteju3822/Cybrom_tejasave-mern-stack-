#include <bits/stdc++.h>
using namespace std;

int stringo(string str)
{
  int count = 0;
  int found = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[0] == '0')
    {
      cout << "It is perfect" << endl;
      break;
    }
    if (str[i] == '0')
    {
      count++;
    }
  }
  found = found + count;
  return found;
}

int main()
{
  string str = "100";
  string str2 = "0111";
  cout << stringo(str) << endl;
  cout << stringo(str2) << endl;
  return 0;
}