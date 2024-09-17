//write a program to check passward and otp nested if else
#include<iostream>
using namespace std;
int main(){
	int pwd;
	int otp;
				cout<<"Enter your passward";

	cin>>pwd;

	if(pwd==2121){
	//	cout<<"Enter your passward";
		cin>>otp;
		if(otp==2211){
			cout<<"you are owner"<<endl;
		}
		else{
			cout<<"you are not owner"<<endl;
		}
	}
	else{
		cout<<"your passward is wrong"<<endl;
	}



	return 0;
}
