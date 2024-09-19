#include<iostream>
using namespace std;
int main(){
int a;
int slab;
int bill;
cin>>a;
cout<<"Enter your Bill";
if(a>=1&&a<=100){
	slab=a*3;
	bill=slab+(slab*0.2);
	cout<<bill<<endl;
}
else if(a>=101&&a<=200){
	slab=a*5;
bill=slab+(slab*0.2);
	cout<<bill<<endl;
	
}
else if(a>=200&&a<=300){
	slab=a*7;
bill=slab+(slab*0.2);
	cout<<bill<<endl;
}
else if(a>=300&&a<=400){
	slab=a*10;
	bill=slab+(slab*0.2);
	cout<<bill<<endl;
}
		
else if(a>=500&&a<=600)	{
	cout<<"Invaid";
}	




	return 0;
}