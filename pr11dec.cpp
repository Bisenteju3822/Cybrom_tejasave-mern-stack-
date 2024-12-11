#include <iostream>
using namespace std;
void first(int a)
{
  if (a < 1)
  {
    return; // Based condition
  }
  cout << a << "number" << endl; // tail//backtracking

  first(a - 1);
  cout << a << "number" << endl; // tail//backtracking
}
int main()
{
  int a;
  cout << "Enter your number" << endl;
  cin >> a;
  first(a);

  return 0;
}
