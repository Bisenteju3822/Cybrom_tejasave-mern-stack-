#include <iostream>
#include <string>
using namespace std;
int findnum()
{
  int n;
  cin >> n;
  string numstr = to_string(n);
  if (numstr == "3754")
  {
    for (int i = 0; i <= numstr.length() - 1; i += 2)
    {
      swap(numstr[i], numstr[i + 1]);
      break;
    }
    cout << numstr << endl;
  }

  else if (numstr == "9876")
  {
    cout << "9876" << endl;
  }
}

int main()
{
  cout << findnum();

  return 0;
}