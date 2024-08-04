#include<iostream>
using namespace std;
int reverse(char arr[],int n){
	 int e=0;
	int v=n-1;
	 
	 while(e<v){
	 	swap(arr[e++],arr[v--]);
	 }
	 
	 
	
	
	
	
}
int main(){
 char arr1[10]={"noon"};
 int len;
 for(int i=0;arr1[i]!='\0';i++){
 	len=len+1;
 }
 cout<<len<<endl;
 reverse(arr1,len);
 cout<<arr1<<endl;
    
   char arr2[10]={"noon"};
if(arr2==arr1){
	cout<<"It is palandrom"<<endl;
}
else{
	cout<<"It is not palandrom"<<endl;
}
 
return 0;
 int e=0;
	
}
