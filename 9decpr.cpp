#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int b = 20;
  a = b;
  int *p;
  p = &a;
  cout << "address::" << p << endl;
  cout << "value::" << *p << endl;

  return 0;
}
