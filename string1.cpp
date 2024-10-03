#include<iostream>
using namespace std;
bool length(char arr[],int n){
	int length=0;
	for(int i=0;arr[i]!='\0';i++){
	length++;
		
	}
			
	 cout<<length<<endl;
	return true;
	
}
int main(){
	char arr[10]={"tejasave"};
	int n=10;
	cout<<arr[10]<<endl;
	length(arr,n);
}
