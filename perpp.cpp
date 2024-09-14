//perfect number is a number in which 8 
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
int c=0;
while( i<n){
	
     if(n%i==0){
     	cout<<i<<endl;
	 c=c+i;
	 
	 }
	      		 i++;

}
cout<<c<<endl;
	
if(c==n){
	cout<<"It is perfect number"<<endl;
	
}
else{
	cout<<"It is not"<<endl;
}


	return 0;
}