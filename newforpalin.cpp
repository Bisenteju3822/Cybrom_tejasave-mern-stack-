#include<iostream>
using namespace std;
int main(){
	int n,c,temp,r;
	cin>>n;
  for( n;n<=200;n++){
  	  temp=n;
  	   c=0;
  	  while(temp!=0){
  	  	 r=temp%10;
  	  	 c=c*10+r;
  	  	 temp=temp/10;
		}
		if(n==c){
			cout<<"palindrom from 100 to 200 ::"<<n<<endl;
		}
		
		
  }


	return 0;
}
