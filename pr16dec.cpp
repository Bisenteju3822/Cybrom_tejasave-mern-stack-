#include <iostream>
using namespace std;

class top
{
private:
  int a;
  int b;

public:
  int sum()
  {
    a = 20;
    b = 30;
    return a + b; // declare and define in class
  }
};

class top2
{
private:
  int a;
  int b;

public:
  void setValues(int x, int y)
  {
    a = x;
    b = y;
  }
  int add(); // declare inside a class and defin outside a class
};

int top2::add()
{
  return a + b;
}

int main()
{
  top ob1;
  cout << "Sum from top class: " << ob1.sum() << endl;

  top2 ob2;
  ob2.setValues(10, 15);
  cout << "Sum from top2 class: " << ob2.add() << endl;

  return 0;
}
