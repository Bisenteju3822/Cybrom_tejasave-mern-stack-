#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
     int length=0;
   int i=1;
   while(n!=0){
   	 n=n/10;
   	length++;
   } 
   cout<<length<<endl; 
    


	return 0;
}