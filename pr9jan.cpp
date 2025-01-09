#include <iostream>
using namespace std;

class name
{
public:
  virtual void display() final
  {
    cout << "now you are odd" << endl;
  }
};

class surname : public name
{
public:
  void display()
  { // Using final to prevent further overriding
    cout << "now you are even" << endl;
  }
};

int main()
{
  name *p;
  surname s;
  p = &s;
  p->display(); // Added missing semicolon

  return 0;
}
