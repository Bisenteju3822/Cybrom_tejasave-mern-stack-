#include <iostream>
using namespace std;
int main()
{
  string a = "teju";
  string &b = a;
  b = "pallu";
  cout << a << endl;

  return 0;
}