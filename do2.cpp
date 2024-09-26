#include<iostream>
using namespace std;
int main(){
//int n;
//cin>>n;
int i=11;
do{
   if(i%2==0){
   	cout<<"even"<<"\t"<<i<<endl;
   }
   else{
   	cout<<"odd"<<"\t"<<i<<endl;
   }
   i++;
   
   
}while(i<=10);


	return 0;
}