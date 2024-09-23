#include<iostream>
using namespace std;
int main(){
	int n1,c,n2;
	cout<<"enter first number=";
	cin>>n1;
	cout<<"enter second number=";
	cin>>n2;
	cout<<"select10foradd\nselect20formultiply\nselect30fordivision\nselect40forsubstraction";
 
 	cin>>c;
	switch(c){
		case 10 :{
			 cout<<n1+n2;
			break;
		}
		case 20:{
			cout<<n1*n2;
			break;
		}
		case 30:
{
	 cout<<n1/n2;
		}
		case 40:{
			cout<<n1-n2;
			break;
		}
		default:{
			
			cout<<"invalid";
		}		
		
	}
	