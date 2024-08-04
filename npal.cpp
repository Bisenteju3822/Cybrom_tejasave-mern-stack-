#include<iostream>
using namespace std;
bool plandrom(char arr[],int n){
 int	e=0;
 int	v=n;
	for(int i;i<n;i++);
	if(e!=v){
		return false;
	}
	if(e==v){
		swap(arr[e++],arr[v--]);
		return true;
	}

	
}
int main(){
	char arr[20]={"noon"};
		int n=sizeof(arr)/sizeof(arr[0]);

	if(plandrom(arr,n)){
		cout<<"paladrom"<<endl;
	}
  
else{
	cout<<"not palandrom"<<endl;
}

	return 0;
}
