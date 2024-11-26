
#include <bits/stdc++.h>
using namespace std;
int palindrom(char *name)
{
  cout << "reverse==" << strrev(name) << endl;
  // int b=strrev(name);
  if (strrev(name) == name)
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
  char name[5] = "teju";

  cout << palindrom(name);
  return 0;
}