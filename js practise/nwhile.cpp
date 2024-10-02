#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
int c=0;
while(i<n){

  if(n%i==0){
  	cout<<"this number is divisible by n="<<i<<endl;
  	c=c+i;
  	
  }
  i++;
  
 }
    	  cout<<"sum of number n="<<c<<endl;



	return 0;
}