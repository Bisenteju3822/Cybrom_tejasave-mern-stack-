#include <iostream>
using namespace std;

class animal
{
public:
  virtual void sound() = 0;
};

class dog : public animal
{
public:
  void sound()
  {
    cout << "barking" << endl;
  }
};

class cat : public animal
{
public:
  void sound()
  {
    cout << "meow meow" << endl;
  }
};
// pure class and wen we describ the virtual keyword in a class then it make pointer object
class lion : public animal
{
public:
  void sound()
  {
    cout << "roar" << endl;
  }
};

int main()
{
  animal *p;
  dog d;
  lion l;
  cat c;

  p = &d;
  p->sound(); // Outputs: barking

  p = &c;
  p->sound(); // Outputs: meow meow

  p = &l;
  p->sound(); // Outputs: roar

  return 0;
}
