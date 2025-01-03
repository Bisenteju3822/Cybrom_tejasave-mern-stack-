#include <iostream>
using namespace std;
class name
{
protected:
  void display()
  {
    cout << "name" << endl;
  }
};
class surname : public name
{
public:
  void go()
  {
    cout << "go" << endl;
    display();
  }
};
int main()
{
  surname ob;
  ob.display();

  return 0;
}
