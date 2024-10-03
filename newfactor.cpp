// write a program to count the factor of any number
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c=0;
	int i=1;
	while(i<=n){
		if(n%i==0){
			cout<<i<<endl;
			
			c++;
		}
		i++;


	}
						cout<<c<<": total factor"<<endl;

 return 0;	
}