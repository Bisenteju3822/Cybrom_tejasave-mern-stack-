#include<iostream>
using namespace std;
int shfitfthree(int arr[],int n){
	int temp[3];
	for(int i=0;i<3;i++){
		temp[i]=arr[i];
	
	}
	for(int i=3;i<n;i++){
		arr[i-3]=arr[i];
	
	}
	for(int i=0;i<3;i++){
		arr[n-3+i]=temp[i];
	}
}
int main(){
int arr[]={2,3,4,5,1};
int n=5;
shfitfthree(arr,n);
for(int i=0;i<n;i++){
	cout<<arr[i]<<endl;
}

	return 0;
}