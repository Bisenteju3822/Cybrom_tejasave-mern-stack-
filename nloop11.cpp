  #include<iostream>
using namespace std;
int main(){
int base;
cin>>base;

int power;
cin>>power;
int result=1;
for(power;power>0;power--){
	result=result*base;

}
cout<<result<<endl;



	return 0;
}