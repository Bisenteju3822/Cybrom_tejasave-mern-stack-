#include <iostream>
using namespace std;

class Top
{
  int x;

public:
  // Constructor
  Top()
  {
    cout << "new" << endl;
  }
};

int main()
{
  Top ob; // Correct way to create an object of Top class

  return 0;
}
