//write program of factorial:in which the 
#include<iostream>
using namespace std;
int main(){
	int n;
	int c=1;
	cin>>n;
	while(n>0){
		c=c*n;
		n--;
	}
	cout<<c;



	return 0;
}