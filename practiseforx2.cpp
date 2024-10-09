#include<iostream>
using namespace std;
int findhcf(int a,int b,int r, int lcm)
{
  r=min(a,b);
  while(r!=0){
  	if(a%r==0&&b%r==0){
  	
	break;
	  }
	  r--;
  }

  lcm=(a*b)/r;
  cout<<"hcf: "<<lcm<<endl;
 return r;
 
 
 }
 
int main(){
 int a,b,r,lcm;
 cin>>a>>b;
 cout<<findhcf(a,b,r,lcm);
  for (int i=100;i<=200;i++){
  	cout<<"lcm of i :"<<i<<endl;
  }

	return 0;
}
