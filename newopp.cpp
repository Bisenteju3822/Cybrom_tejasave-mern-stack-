#include<iostream>
using namespace std;
int main(){
int n,r;
cin>>n;
 int c=0;
while(n!=0){
		r=n%10;
	  	c=c*10+r;
	  	n=n/10;
}
cout<<c<<endl;


	return 0;
}
