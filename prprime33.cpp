#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int i = 2;
  int f;
  while (i < n)
  {
    if (n % i == 0)
    {
      f = 0;
      break;
    }
    i++;
  }
  if (f == 0)
  {
    cout << "not a prime" << endl;
  }
  else
  {
    cout << "Prime" << endl;
  }

  return 0;
}