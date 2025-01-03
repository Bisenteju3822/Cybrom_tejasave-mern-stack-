#include <iostream>
using namespace std;
class RBI
{
public:
  void msg()
  {
    cout << "ok" << endl;
  }
};
class SBI : public RBI
{
public:
  void sbimsg()
  {
    cout << "sbi" << endl;
  }
};
class pnb : public RBI
{
public:
  void sbimsg()
  {
    cout << "sbi" << endl;
  }
};
class axis : public RBI
{
public:
  void sbimsg()
  {
    cout << "sbi" << endl;
  }
};
int main()
{
  axis ob;
  ob.msg();
  ob.sbimsg();

  return 0;
}
