#include<iostream>
using namespace std;
int findhcf(int a,int b,int r, int lcm)
{
  ;
  for(r=min(a,b);r!=0;r--){
  	if(a%r==0&&b%r==0){
  	
	break;
	  }
	 
  }

  lcm=(a*b)/r;
  cout<<"hcf: "<<lcm<<endl;
 return r;
 
 
 }
 
int main(){
 int a,b,r,lcm;
 cin>>a>>b;
 cout<<findhcf(a,b,r,lcm);
 

	return 0;
}