#include<iostream>
using namespace std;
int main(){
 int area,l,b,r;

 cin>>r;
 cin>>l;
 cin>>b;
 int pi=3.14;
 cout<<"1 for circle\n2forrectangle\n3fortriangle"<<endl;
 int c;
 cin>>c;
 switch(c){
 	case 1:{
 		area=pi*r*r;
 		cout<<"area of circle"<<"\t"<<area<<endl;
		break;
	 }
	 case 2:
{
	 area=l*b;
	 cout<<"area of retangle"<<area<<endl;
	 break;
 } 
 case 3:{
 	area=0.5*l*b;
 	cout<<"area of triangle"<<area<<endl;
	break;
 }
 default :{
 	cout<<"Invalid"<<endl;
	break;
 }
 }
 


	return 0;
}