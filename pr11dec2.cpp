#include <iostream>
using namespace std;
void first(int a, int i)
{

  if (i > 10)
  {
    return; // Based condition
  }

  cout << "table==" << a * i << endl; // tail//backtracking

  first(a, i + 1);
}
int main()
{
  int i = 1;
  int a;
  cout << "Enter your number" << endl;
  cin >> a;
  first(a, i);

  return 0;
}
