

/*char name[5]="teju";
cout<<name<<endl;

char pwd[5];
cin>>pwd;
//cin>>s;
//cout<<strlen(n);
//cout<<strupr(n);
//cout<<strcat(n,s)<<"\n";//
//cout<<strcpy(n,s)<<"\n";
//cout<<n;
if(strcmp(pwd,repwd)==0){
  cout<<"password matched"<<endl;
}
else{
  cout<<"false";
}

  return 0;
}//wrtie a proram to check given string is palindrom or not*/

#include <bits/stdc++.h>
using namespace std;

void palindrom(char pwd[])
{
  int n = strlen(pwd);
  char rev[n + 1];
  for (int i = 0; i < n; i++)
  {
    rev[i] = pwd[n - 1 - i];
  }
  rev[n] = '\0';

  if (strcmp(pwd, rev) == 0)
  {
    cout << "palindrome" << endl;
  }
  else
  {
    cout << "not palindrome" << endl;
  }
}

int main()
{
  char pwd[100];
  cout << "Enter a string: ";
  cin >> pwd;
  palindrom(pwd);
  return 0;
}
