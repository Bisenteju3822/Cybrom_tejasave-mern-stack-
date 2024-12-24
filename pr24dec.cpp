#include <iostream>
using namespace std;
class dest
{
public:
  dest()
  {
    cout << "memory allocate" << endl;
  }
  ~dest()
  {
    cout << "dellocate memory" << endl;
  }
  void display()
  {
    cout << "function run" << endl;
  }
};
int main()
{
  dest ob;
  ob.display();

  return 0;
}
// destructor and constructor is bydefaull
// new allocate memory in heap dynamic