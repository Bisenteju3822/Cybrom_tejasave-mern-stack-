#include <iostream>
using namespace std;
class teju
{

  int a;
  friend int main();
};

int main()
{

  teju b;
  b.a = 10;
  cout << "a::" << b.a << endl;

  return 0;
}
