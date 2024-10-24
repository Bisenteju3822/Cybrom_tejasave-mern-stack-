#include <iostream>
using namespace std;
int main()
{
  int val = 1;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 5; j >= i; j--)
    {
      cout << " ";
    }
    for (int c = 1; c <= (2 * i - 1); c++)
    {
      cout << val;
      val = 1 - val;
    }
    cout << endl;
  }

  return 0;
}