#include <iostream>
using namespace std;
class Top
{
  int a = 10;
  int b = 20;

public:
  int sum();
};
int Top::a;
int Top::b;
int Top::sum()
{

  cout << a + b;
}
int main()
{
  Top ob;
  ob.sum();
}