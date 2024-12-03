#include <iostream>
using namespace std;
int table(int &a)
{

  for (int i = 1; i <= 10; i++)
  {
    cout << i * a << "\t";
  }
  cout << endl;
}
int main()
{
  int a;
  cout << "Enter the number";
  cin >> a;
  cout << table(a);

  return 0;
}