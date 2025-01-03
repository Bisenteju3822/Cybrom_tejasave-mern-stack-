#include <iostream>
using namespace std;
class rbi
{
public:
  void display()
  {
    cout << "new" << endl;
  }
};
class sbi : public rbi
{
public:
  void display()
  {
    cout << "new" << endl;
  }
};
class axis : public rbi
{

public:
  void display()
  {
    cout << "new" << endl;
  }
};
class cust : public sbi, public axis
{
public:
  void display()
  {
    cout << "new" << endl;
  }
};
int main()
{
  cust ob;
  ob.display();

  return 0;