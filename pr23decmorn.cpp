#include <iostream>
using namespace std;
class overload
{

public:
  int result(int a)
  {
    const int pii = 3.14;

    cout << "area of circle::" << pii * a * a << endl;
  }
  int result(int a, int b)
  {
    cout << "area of rectangle::" << a * b << endl;
  }
};
int main()
{
  int a, b;
  cout << "Enter value first\nEnter value Second" << endl;
  cin >> a >> b;
  overload ob;
  ob.result(a);
  ob.result(a, b);

  return 0;
}