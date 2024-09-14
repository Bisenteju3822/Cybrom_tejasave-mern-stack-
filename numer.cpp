#include<iostream>
using namespace std;
int main(){
int n;
int c=0;
cin>>n;
while(n>0){
	c=c+n%10;
	n=n/10;	
	
}
cout<<c<<endl;


	return 0;
}