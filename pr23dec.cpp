#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
  a = a + b;
  b = a - b;
  a = a - b;
  // a=2,b=3 a=a+b;a=5;b=a-b;a=a-b;
}
int main()
{
  int a, b;
  cout << "Enter A" << endl;
  cin >> a;
  cout << "Enter B" << endl;
  cin >> b;
  swap(a, b);
  cout << a << "\n"
       << b << "\n"
       << endl;

  return 0;
}