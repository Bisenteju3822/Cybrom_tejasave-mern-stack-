#include<iostream>
using namespace std;
int authmor(int n,int sqr){
    sqr=n*n;
      	

      	
       	string n_str=to_string(n);
      	string sqr_str=to_string(n);

 
 if (sqr_str.substr(sqr_str.size()-n_str.size())==n_str){
 	cout<<"It is automorphic number";
 }
else{
	cout<<"Not authomorphic number";
}  	
}
int main(){
 int n;
 int sqr;
   

	return authmor(n,sqr);
}