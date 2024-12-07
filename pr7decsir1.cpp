#include <iostream>
using namespace std;
// FACTOR OF N NUMBERAND LENGTH
int main()
{
  int n;
  cout << "Enter your number" << endl;
  cin >> n;
  int i = 1;
  int count = 0;
  while (i < n)
  {
    if (n % i == 0)
    {
      count++;
      cout << "length::" << count << endl;
      cout << "number which divide by n::" << i << endl;
    }

    i++;
  }

  return 0;
}
