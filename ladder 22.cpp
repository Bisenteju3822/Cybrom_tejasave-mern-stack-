#include<iostream>
using namespace std;
int main(){
int p,c,m;
cin>>p>>c>>m;
int T;
T=p+c+m;

float per=(T/300)*100;
if(per>=60&&per<=100){
	cout<<"Ist division";
}
else if(per>=59&&per<=60){
	cout<<"II nd";
}
else if(per>=35&&per<=49){
	cout<<"III rd";
}
else{
	cout<<"fail";
}




	return 0;
}