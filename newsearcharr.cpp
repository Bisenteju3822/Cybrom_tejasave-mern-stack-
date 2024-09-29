#include<iostream>
using namespace std;
bool findn(int arr[],int n){
	int m;
	cin>>m;
	int f=0;
	for(int i=0;i<n;i++){
		if(arr[i]==m){
         cout<<m;
		
			f=1;
		}
	
	}
	if(f==1){
		cout<<"It is found "<<endl;
	}
	else{
		cout<<"not found";
	}
	
	return true;
}
int main(){
int arr[5]={2,3,4,5,7};
int n=sizeof(arr)/sizeof(arr[0]);
findn(arr,n);
	return 0;
}
