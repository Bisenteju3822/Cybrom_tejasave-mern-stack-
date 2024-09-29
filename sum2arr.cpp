#include<iostream>
using namespace std;
bool findn(int arr[],int n){
	
	int sum=0;
	for(int i=0;i<n;i++){
	   sum=sum+arr[i];
		}
	
	
	cout<<sum<<endl;
	return true;
}
int main(){
int arr[5]={2,3,4,5,7};
int n=sizeof(arr)/sizeof(arr[0]);
findn(arr,n);
	return 0;
}