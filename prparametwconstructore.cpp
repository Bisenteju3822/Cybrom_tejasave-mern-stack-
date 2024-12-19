#include <iostream>
using namespace std;
class Top
{
  int x;

public:
  Top(int a)
  {

    x = 4;
    cout << x + a << endl; // parameer constructor
  }
};
int main()
{
  Top ob(22);
}