#include<iostream>
using namespace std;
void first(){
	cout<<"Hello boys";
}
void second(string name,void(callback)()){
	name= "get new ";
	cout<<name;
	callback();
}
int main(){
	string name;
	second("Alice",first);
	return 0;