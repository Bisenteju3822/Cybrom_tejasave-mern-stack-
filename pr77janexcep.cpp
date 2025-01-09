#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  a = 1;
  b = 0;

  try
  {
    if (b == 0)
    {
      throw "Division by zero error!";
    }
    c = a / b; // This line will not be executed if b == 0
    cout << c << endl;
  }
  catch (const char *e)
  {
    cout << "Exception: " << e << endl;
  }

  cout << "you" << endl;
  return 0;
}
