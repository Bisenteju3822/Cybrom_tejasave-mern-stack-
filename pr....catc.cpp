#include <iostream>
using namespace std;

int main()
{
  int b;
  cin >> b;
  try
  {
    if (b == 1)
    {           // corrected comparison operator
      throw 20; // throws an integer
    }
    throw 44.55;
  }

  catch (int e)
  {
    cout << "Caught an integer: " << e << endl;
  }
  catch (...)
  {
    cout << "Caught an exception of unknown type" << endl;
  }
  return 0;
}
