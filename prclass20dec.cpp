#include <iostream>
using namespace std;
class student
{
  int x;

public:
  student(int x)
  {
    this->x = x; // this pointer use when there be same attributesin class
  }
  void display()
  {
    cout << "roll no::" << x << endl;
  }
};
int main()
{
  student ob(44);
  ob.display();

  return 0;
}