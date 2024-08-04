#include<iostream>
using namespace std;
int main(){
//	char arr[]={"teju is back"}
char arr[30];
cout<<"enter your name"<<endl;
cin>>arr;
int v;
int  len=0;
for(int i=0;arr[i]!='\0';i++){
	//len=arr[i];
    len=len+1;

}
cout<<len<<endl;


	return 0;
}
