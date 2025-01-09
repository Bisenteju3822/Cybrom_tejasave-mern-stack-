#include <iostream>
using namespace std;

class name
{
public:
  virtual void display() = 0;
};

class surname : public name
{
public:
  void display() final
  { // Using final to prevent further overriding
    cout << "now you are even" << endl;
  }
};
class sur : public name
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
  name f;
  f.display();
  sur k;
  surname s;
  p = &s;
  p->display(); // Added missing semicolon
  p = &k;
  p->display();
  return 0;
}
#include <iostream>
using namespace std;

class name
{
public:
  virtual void display() = 0;
};

class surname : public name
{
public:
  void display() final
  { // Using final to prevent further overriding
    cout << "now you are even" << endl;
  }
};
class sur : public name
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
  name f;
  f.display();
  sur k;
  surname s;
  p = &s;
  p->display(); // Added missing semicolon
  p = &k;
  p->display();
  return 0;
}