#include<bits/stdc++.h>
using namespace std;
int main(){
	int temp;
	int arr[5]={4,2,3,6,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++){
	   if(arr[i]>arr[i+1]){
	      temp=arr[i];
	      arr[i]=arr[i+1];
	      arr[i+1]=temp;
	    i=-1;
	   
	   }
	   
	
	   
	}
		for(int i=0;i<n;++i){
			cout<<arr[i]<<endl;
}
}