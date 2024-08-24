#include<iostream>
using namespace std;
bool authmorphic(int n){
	if(n<0){
		return false;
	}
		int sqr=n*n;
		while(n>0){
		
		if (n%10!=sqr%10){
			return false;
		}
		return true;
	}
		
		
	
}
int main(){
 int n;
 cin>>n;
 authmorphic(n)?cout<<"Authmorphic": cout<<"Not a authmorphic";


	return 0;
}