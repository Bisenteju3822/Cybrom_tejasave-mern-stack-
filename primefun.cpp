#include<iostream>
using namespace std;
bool primeon(int n,int i=2){
	if(n<=1){
		return false;
	}
	   if(n==2){
		return true;
	}
	while(i*i<=n){
		if(n%i==0){
			return false;
		}
		
		i++;
	}
	   return true;
			

}
int main(){
	int num;
	cin>>num;
//	int i=3;
 if(primeon(num)){
 
 	cout<<num<<"Prime"<<endl;
}
 else{
 
 	cout<<num<<"Not a Prime"<<endl;
}
	return 0;
}