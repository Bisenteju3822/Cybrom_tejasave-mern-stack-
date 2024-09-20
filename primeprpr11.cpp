#include<iostream>
using namespace std;

bool prime(int num){
	if(num<=1){
		return false;
	}
	if(num<=2){
		return true;
	}
	
	 
		for(int i=3;i<=num;i++){
			if(num%i==0){
				return false;
				
			}
			return true;
		}
	} 
	 


int main(){
	int n;
//	cin>>n;
	cout<<prime(6)?"Yes":"No";
	
	


	return 0;
}