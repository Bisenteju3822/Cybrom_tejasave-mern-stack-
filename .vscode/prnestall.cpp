
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
                                num++;

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
               num++;

        }

        cout << endl;
    }
}*/
/*int main() {
    int n=3;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
              cout<<" "<<j*j<<" ";




        }
        cout<<endl;

        cout << endl;
    }
}*/
/*int main() {
    int n=27;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
              cout<<" "<<char(j)<<" ";




        }
        cout<<endl;

        cout << endl;
    }
}*/
/*int main() {
    int n=3;
    int num=65;
    for (int i = 1; i <=3; i++) {
        for (int j =3; j >i; j--) {
              cout<<" ";




        }

        for(int c=1;c<=i;c++){
          cout<<char(num);
          num++;

    }


    cout<<endl;


    }
    return 0;
}

*/
/*int main() {
    int n=3;

    for (int i = 1; i <=3; i++) {
        for (int j = 3; j > i; --j) {
              cout<<" ";




        }
        for(int c=1;c<=i;c++){
          cout<<c;
    }


        cout << endl;
    }
}*/
/*int main() {
    int n=3;
    int num=1;

    for (int i = 1; i <=3; i++) {
        for (int j = 3; j > i; --j) {
              cout<<" ";




        }
        for(int c=1;c<=i;c++){
          cout<<num;
          num++;
    }


        cout << endl;
    }
}*/
/*int main() {
    int n=3;


    for (int i =65 ; i <=67; i++) {
        for (int j = 65; j > i; --j) {
              cout<<" ";




        }
        for(int c=65;c<=i;c++){
          cout<<char(i);



    }


        cout << endl;
    }
}*/
int main()
{
  int n = 3;

  int j;
  for (int i = 65; i <= 67; i++)
  {
    for (j = 67; j > i; --j)
    {
      cout << " ";
    }

    for (int c = 65; c <= i; c++)
    {

      cout << char(c);
    }
    cout << endl;
  }
}
