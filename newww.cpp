
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
  int r=min(a,b);
  while(r>0){
  	if (a%r==0&&b%r==0){
  		 break;
	  }
	  r--;
	  
  }
  cout<<r<<endl;


	return 0;
}