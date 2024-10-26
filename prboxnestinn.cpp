#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int J = 1; J <= 5; J++)
    {
      if (i == 5 || i == 1 || J == 1 || J == 5)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
