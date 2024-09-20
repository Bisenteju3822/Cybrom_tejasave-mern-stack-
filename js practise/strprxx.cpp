#include<iostream>
#include<string>
using namespace std;
string remove_space(string str){
	 string result="";
	 for(char c :str){
	 	if(!isspace(c)){
		 
	 	 result+=c;
	 
	 	 
	 }
	 	// c++;
}
	 return result;

}
int main(){
 string str="new space of that";
cout<<"remove string space"<<remove_space(str)<<endl;


	return 0;
}