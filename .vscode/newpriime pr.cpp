#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;
  bool f=true;
	while( i<n){
		if(n==2){
		   cout<<"prime"<<endl;
		   break;
		}
		if(n%i==0)
	{
		f=false;
		break;
		}
		i++;
	}
		
		if(f){
			cout<<"prime"<<endl;
		}
		else{
           cout<<"NOT a prime"<<endl;			
		}	

	return 0;
}