#include <iostream>
using namespace std;
class top
{
  int a = 10;

public:
  operator++()
  {
    a--;
    cout << a << endl;
  }

public:
  operator--()
  {
    a++;
    cout << a << endl;
  }
};
int main()
{
  top s;
  ++s;
  --s;

  return 0;
}
