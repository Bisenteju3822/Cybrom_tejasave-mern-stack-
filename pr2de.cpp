#include <iostream>
using namespace std;

class RBi
{
  int a = 20;

public:
  int data()
  {
    cout << a * a << endl;
    return 0;
  }
};

class Sbi : public RBi
{
public:
  int into()
  {
    cout << a + a << endl;
    return 0;
  }
};

class cust : public Sbi
{
public:
  void show()
  {
    cout << "Using the cust class" << endl;
  }
};

int main()
{
  cust o;
  o.data(5); // Example input
  o.into(5); // Example input
  o.show();
  return 0;
}
