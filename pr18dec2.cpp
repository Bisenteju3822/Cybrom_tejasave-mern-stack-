#include <iostream>
using namespace std;

class EncapsulatedClass
{
private:
  // Private data member
  int data;

public:
  // Public setter method to set the value of data
  void setData(int value)
  {
    data = value;
  }

  // Public getter method to access the value of data
  int getData()
  {
    return data;
  }
};

int main()
{
  EncapsulatedClass obj;
  obj.setData(10);
  cout << "Data: " << obj.getData() << endl;

  return 0;
}
