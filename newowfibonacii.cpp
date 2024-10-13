#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int count = 0;
  int n1 = 0;
  int n2 = 1;
  int store = n1 + n2;
  while (count <= n)
  {
    cout << n1 << endl;
    store = n1 + n2;
    n1 = n2;
    n2 = store;

    count++;
  }
  cout << endl;

  cout << "fibonacci" << n2 << endl;

  return 0;
}
