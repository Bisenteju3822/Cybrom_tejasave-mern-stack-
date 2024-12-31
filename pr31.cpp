#include <iostream>
using namespace std;
class rbi
{
  int x;

public:
  rbi()
  {
    cout << "rbi" << endl;
  }
  ~rbi()
  {
  }
};
class sbi : public rbi
{
  int x;

public:
  sbi()
  {
    cout << "making sbi" << endl; // sinle inheritance
  }
  ~sbi()
  {
    cout << "delte sbi" << endl;
  }
  void show()
  {
    cout << "new" << endl;
  }
};
int main()
{
  sbi s;
  s.show();

  return 0;
}