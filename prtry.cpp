#include <iostream>
using namespace std;

int main()
{
  int b;
  cout << "enter value in 1 2 3 or any other value" << endl;
  cin >> b;

  try
  {
    if (b == 1)
    {
      throw 'a'; // throws a char
    }
    if (b == 2)
    {
      throw 33.44; // throws a double
    }
    if (b == 3)
    {
      throw 3; // throws an int
    }
    throw 4.5f; // throws a float for any other value
  }
  catch (int n)
  {
    cout << "integer" << endl; // handles int exceptions
  }
  catch (double n)
  {
    cout << "double" << endl; // handles double exceptions
  }
  catch (char n)
  {
    cout << "character" << endl; // handles char exceptions
  }
  catch (...)
  {
    cout << "generic exception caught" << endl; // handles all other exceptions
  }
  cout << "finished" << endl;

  return 0;
}
