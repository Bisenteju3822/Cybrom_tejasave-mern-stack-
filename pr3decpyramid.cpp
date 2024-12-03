// #include<iostream>
// using namespace std;
/*int pattern(int n){
  for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<endl;
  }

}
int main(){
  int n=5;
  pattern(n);

}*/
#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << " ";
    }
    for (int c = 0; c < (2 * i - 1); c++)
    {

      cout << "*";
    }
    cout << endl;
  }
}