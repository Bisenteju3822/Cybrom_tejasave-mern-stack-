#include<iostream>
using namespace std;
int minmax(int arr[],int record){
	int count=arr[0];
	for(int p;p<record;p++){
		if(count<arr[p]){
			count=arr[p];
			
		}
			cout<<arr[p]<<endl;
	}
	
	
}

int main(){
	int sarr[5]={7,4,5,3,2};
	int n=sizeof (sarr)/sizeof (sarr[0]);
	cout<<"ascending AND DESCENDING"<<endl;
	minmax(sarr,n);
	return 0;
}
