#include <iostream> //simple class and obj//this

using namespace std;
class first
{
  int a;

public:
  int product(int a)
  {
    this->a = a;
    return a * a;
  }
};

int main()
{

  first ob;
  cout << ob.product(5);

  return 0;
}
