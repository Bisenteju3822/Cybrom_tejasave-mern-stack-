#include <iostream>
#include <cstring>
using namespace std;
int palindrom(string str)
{
  bool paindrom;
  int len = str.length();
  string reverse;
  for (int i = len - 1; i >= 0; i--)
  {
    reverse += str[i];
  }
  cout << reverse << endl;
  if (reverse == str)
  {
    cout << "palindrom" << endl;
  }
  else
  {
    cout << "not palindrom" << endl;
  }
}
int main()
{
  string str;
  cin >> str;
  palindrom(str);

  return 0;
}
