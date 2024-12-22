#include <iostream>
using namespace std;
class lfirst
{
public:
  int number(int &x)
  {
    // declare
    int d;
    int lastdigit = x % 10;
    cout << "last digit ::" << lastdigit << endl;

    while (x >= 10)
    {
      x /= 10;
    }

    cout << "first digit ::" << x << endl;

    cout << "sum of last and first::" << lastdigit + x << endl;
  }
};

// define
int main()
{
  int n;
  cout << "enter the number" << endl;
  cin >> n;
  lfirst ob;
  ob.number(n);

  return 0;
}