#include<iostream>
using namespace std;
int main(){
     int n,first;
     cin>>n;
     first=n;
     int last=n%10;
     while(first>10){
     	
     	first=first/10;
     	
	 }
	 int sum=first+last;
	 
	 cout<<"last :"<<last<<endl;
	 cout<<"first :"<<first<<endl;
	 cout<<"sum :"<<sum<<endl;
	 


	return 0;
}