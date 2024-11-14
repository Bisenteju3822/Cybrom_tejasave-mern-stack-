#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  int y = 6;
  cout << "old value of n" << n << endl;
  cout << "old value of y" << y << endl;
  n = n + y;
  y = n - y;
  n = y - n;

  cout << "swap of n" << y << endl;
  cout << "swap of y" << n << endl;

  return 0;
}