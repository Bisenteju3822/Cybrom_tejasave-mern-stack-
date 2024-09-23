#include<iostream>
using namespace std;
bool large(int arr[],int size,int smax,int larg){
 larg=arr[0];
 smax=arr[0];
	
	
	
	for(int i=1;i<size;i++){
		if(arr[i]>larg){
			smax=arr[i];
			larg=arr[i];
		if(arr[i]>smax&&smax!=larg){
		
			
			smax=arr[i];
		
		}
	}
	//cout<<n<<endl;
	cout<<smax<<endl;
//	if(smax>)
	
	return true;
	
}
}
int main(){
 int arr[5]={4,2,7,6,8};
 int smax;
 int larg;

cout<<large(arr,5,smax,larg);

	return 0;
}
