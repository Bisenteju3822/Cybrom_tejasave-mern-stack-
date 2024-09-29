#include<iostream>
using namespace std;
bool prim1(int num){
	
	if(num<=1){
		return false;
	}

	int i=2;
	while( i<=num){
		   if (num == 2) {
        return true;
    }
		if(num%i==0){
			return false;
		
		}
		i++;
		 return true;
	  
	}
	
}
bool prim2(bool (*prim1)(int),int arr[],int n){
	int i=0;
	do{
		if(prim1(arr[i])){
			cout<<arr[i]<<" = It is prime"<<endl;
		}
		else{
			cout<<arr[i]<<" = It is not a prime"<<endl;
		}
		
		i++;
	}while(i<n);
	return true;
	
	
	
}

	
//
int main(){
	int m;
	
 int arr[5]={2,3,4,5,6};
 int n=sizeof(arr)/sizeof(arr[0]);
  //cout<<(prim1(14)?"Yes":"NO");
  cout<<prim2(prim1,arr,n);

	return 0;
}

