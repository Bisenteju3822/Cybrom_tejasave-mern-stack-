#include<iostream>
using namespace std;
bool shift(int arr[],int temp[],int n){
	for(int i=0;i<2;i++){
	temp[i]=arr[i];
}
	
	
	for(int i=2;i<n;i++){
		arr[i-2]=arr[i];
	
	}
	for(int i=0;i<2;i++){
		arr[n-2+i]=temp[i];
	}
		

return true;

}
int main(){
int arr[5]={5,3,1,7,6};
int temp[2];
int n=5;
shift(arr,temp,n);
 for(int i=0;i<n;i++){
 	cout<<arr[i]<<endl;
 }
	return 0;
}
