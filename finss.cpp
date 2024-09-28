#include<iostream>
using namespace std;
int missingn(int arr[],int n)
{
	int m;
	cin>>m;
	int f;
	
	int i=0;
	while(i<n){
		if(arr[i]==m){
			
		   cout<<"index of n"<<i<<endl;
		   cout<<"value of n"<<m<<endl;
		   f==1;
		}
		
		i++;
		
		
			
			
	
		
		
	}
	if(f==1){
		cout<<"in the array"<<endl;
	}
	else{
		cout<<"not found in array"<<endl;
	}
	

	return i;
}
int main(){
int arr[5]={2,3,7,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
missingn(arr,n);



	return 0;
}