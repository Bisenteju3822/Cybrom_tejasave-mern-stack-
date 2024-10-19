#include <iostream>
using namespace std;
int main()
{
  int c;
  cin >> c;
  int n = 0, v = 1, m;
  while (n < c)
  {

    cout << n << endl;
    m = n + v;
    n = v;
    v = m;
  }

  return 0;
}