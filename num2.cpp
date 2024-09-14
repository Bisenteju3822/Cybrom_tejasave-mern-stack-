//write a programinwhich how many digit in  a given number
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
 int length=0;
while(n>= 0){
	n=n/10;
	length++;
//	cout<<length<<endl;
}
cout<<length<<endl;


	return 0;
}