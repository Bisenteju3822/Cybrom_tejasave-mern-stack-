#include<iostream>
using namespace std;
int main(){
	int mark;
	int thmark;
	cout<<"enter your 10th mark";
	cin>>mark;
   if(mark>65&&mark<=100){
   	   cout<<"your are eligible for this"<<endl;
   	   cin>>thmark;
   	   if(thmark>70&&thmark<=100){
   	   	cout<<"you are elgible for clerk";
		  }
		  else{
		  	cout<<"you are elgible for peon";
		  }
   }
   else{
   	cout<<"you are not elgible";
   }


	return 0;
}