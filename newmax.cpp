#include<iostream>
using namespace std;
bool largest(int arr[],int size,int smax){
	smax=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>smax){
			smax=arr[i];
			
		
		}
	}
	cout<<smax<<endl;
	
	return true;
	
}
int main(){
 int arr[5]={4,2,6,7,8};
 int smax;

cout<<largest(arr,5,smax);

	return 0;
}
