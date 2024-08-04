#include<iostream>
using namespace std;
int findhcf(int a,int b ){
	while(a%b!=0){
		int temp=b;
		b =a%b;
		return b;
		cout<<b<<endl;
	}
	
}
int main(){
cout<<"Hcf and lcm program"<<endl;
int a ,b;
cin<<a<<b<<endl;
findhcf(a,b);

	return 0;
}
