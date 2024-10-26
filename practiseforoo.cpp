#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 3; j >= i; j--)
    {
      cout << "*";
    }
    //	cout<<endl;
    ////	for(int c=1;c<=i;c++){
    ////	 cout<< " ";
    //	}
    cout << endl;
  }

  return 0;
}