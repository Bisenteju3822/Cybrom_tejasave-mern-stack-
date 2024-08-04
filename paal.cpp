#include<iostream>
using namespace std;
int main(){
 int e,v;
 
char str[20]={"aboaob"};
int n=sizeof(str)/sizeof(str[0]);
     for(int i=0;n!='\0';i++){
     	e=0;
     	v=n-1;
     	
     	if(str[e]==str[v]){
     		e++;
     		v++;
     		
		 }
		 else{
		 	return 0;
		 }
	 }
cout<<"palindrom or not:"<<str<<endl;
;
	return 0;
}
