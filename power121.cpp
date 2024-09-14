  #include<iostream>
using namespace std;
int main(){
int base;
cin>>base;

int power;
cin>>power;
int result=1;
while(power>0){
	result=result*base;
	power--;
}
cout<<result<<endl;



	return 0;
}