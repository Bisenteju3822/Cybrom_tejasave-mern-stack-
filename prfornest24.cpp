#include <iostream>
using namespace std;
/*int main(){
  int n=3;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<" "<<"*"<<" ";
    }
    cout<<endl;
  }
  return 0;//output *
                    * *
                    * * *
}*/
//

/*int main(){
  int n=3;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i;
    }
    cout<<endl;//output 1
                        2 2
  }                       3 3 3

  return 0;
}*/
/*int main(){
    int n=3;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
}
cout<<endl;
}
return 0;
}*/
/*int main() {
    int height = 3;
   int num=1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout <<num;
                                num++; output1
                                             2 3
                                             4 5 6

        }

        cout << endl;
    }
return 0;
} */
/*int main() {
    int height = 3;
   int num=1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout <<" "<<num*num<<" ";
               num++;      output 1
                                  4 9
                                  16 25 36

        }

        cout << endl;
    }
}*/
/*int main() {
    int n=3;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
              cout<<" "<<j*j<<" ";



                       output 1
                              1 4
                              1 4 9
        }
        cout<<endl;

        cout << endl;
    }
}*/
/*int main(){
  int num=3;

  for(int i=65;i<=67;i++){
    for(int j=67;j>i;j--){
      cout<<"";
    }
    for(int c=i;c>=65;c--){
      cout<<char(c);


    }
    cout<<endl;
  }
}*/
int main()
{
  //	int num=3;

  for (int i = 1; i <= 3; i++)
  {
    for (int j = 3; j > i; j--)
    {
      cout << " ";
    }
    for (int c = i; c >= 1; c--)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
