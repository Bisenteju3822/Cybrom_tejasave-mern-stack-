
#include <iostream>
using namespace std;

class teju
{
  int amount;

  void display()
  {
    cout << "display" << endl;
  }

  friend class papa;
};

class pallu
{
  int b;

  void show()
  {
    cout << "show" << endl;
  }

  friend class papa;
};

class papa
{
public:
  void all(teju a)
  {
    cout << "a: " << a.amount << endl;
    a.display(); // Accessing private member function of teju
  }

  void all(pallu d)
  {
    cout << "b: " << d.b << endl;
    d.show(); // Accessing private member function of pallu
  }
};

int main()
{
  teju a;
  pallu d;
  papa s;
  s.all(a); // Accesses private members of teju
  s.all(d); // Accesses private members of pallu

  return 0;
}
