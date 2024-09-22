#include<iostream>
using namespace std;
int main(){

int num,num1;
cin>>num>>num1;
int r=min(num,num1);
while(r>0){
	 if((num%r==0)&&(num1%r==0)){
	 	break;

	 }
	 r--;

}
	 cout<<"GREATEST COMMON FACTOR ="<<r<<endl;
  int lcm = (num,num1)/r;
  cout<<"LCM="<<lcm<<endl;

	return 0;
}