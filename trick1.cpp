#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 1;
  if (a-- && ++b)
  {
    cout << "Inside if\n";
  }
  else
  {
    cout << "Inside else\n";
  }
  cout << "a: " << a << ", b: " << b << endl;
  return 0;
}
