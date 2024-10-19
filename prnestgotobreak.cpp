#include <iostream>
using namespace std;
int main()
{
  int b;
  goto b;
  for (int i = 1; i < 4; i++)
  {
    if (i == 1)
    {
      cout << i << endl;
    }
    for (int j = 1; j < 4; j++)
    {
      cout << i << endl;
    }
  }
b:
  cout << "new" << endl;

  return 0;
}