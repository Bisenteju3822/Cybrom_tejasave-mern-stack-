#include<iostream>
using namespace std;
int merge(int arr1[],int n1,int n2,int arr2[],int arr3[]){
	for(int i=0;i<n1;i++){
	     arr3[i]=arr1[i];
	     cout<<arr3[i]<<endl;
	}
	for(int i=0;i<n1;i++){
	     arr3[n1+i]=arr2[i];
	     cout<<arr3[n1+i]<<endl;
	}
  	
}
int main(){
	int arr1[5]={2,3,4,5,6};
	int arr2[5]={4,5,3,2,6};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
   int 	n2=sizeof(arr2)/sizeof(arr2[0]);
	int arr3[10];
    merge(arr1,n1,n2,arr2,arr3);
	return 0;
}
