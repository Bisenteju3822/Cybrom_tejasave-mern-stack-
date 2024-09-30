#include<iostream>
using namespace std;
bool shift0(int arr[],int n){
       int j=0;
       int i=0;
	   while(i<n){
	   	if(arr[i]!=0){
	   		arr[j++]=arr[i];
	   			  
	   			  
		   }
		   

		   
		   i++;
	
	   }
	   while(j<n){
	   	arr[j++]=0;
	   }
   
	  
}
int main(){
int arr[8]={2,0,5,9,7,0,7,0};
int n=sizeof(arr)/sizeof(arr[0]);
shift0(arr,n);
   for(int i;i<n;i++){
   	cout<<arr[i]<<endl;
   }
	return 0;
}
