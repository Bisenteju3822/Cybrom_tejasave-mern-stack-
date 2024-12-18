#include <iostream>
using namespace std;
class virus
{
public:
  void get()
  {
    cout << "the virus is comming" << endl;
  }
};
class reward
{
  virus v;

public:
  void cme()
  {
    cout << "reward is coming" << endl;
    v.get();
  }
};
int main()
{
  reward x;
  x.cme();

  return 0;
}
