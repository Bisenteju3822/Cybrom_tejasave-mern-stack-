#include <iostream>
using namespace std;
class over
{
public:
  int a;

  void sum()
  {
    a = 10;
    cout << a * a * a << endl;
  }
  void sum(int a, int b, int x)
  {

    cout << a * b * x;
  }
};
int main()
{
  over ob;
  ob.sum();
  ob.sum(1, 4, 7);

  return 0;
}
