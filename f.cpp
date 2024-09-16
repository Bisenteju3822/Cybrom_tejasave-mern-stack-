//the number is divided by 7
#include<iostream>
using namespace std;
	int main(){
		int n=44;
		int  f=0;
		int i=1;
		while(i<=n){
			if(i%7==0){
				f=1;
				break;
			}
			i++;
			}
				if(f==1){
				cout<<"Found"<<endl;}
			else{
				cout<<"Its Not found"<<endl;
			}
		
		return 0;
	}