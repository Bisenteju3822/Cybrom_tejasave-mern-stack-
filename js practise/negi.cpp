#include<iostream>
using namespace std;
int main(){
 int r,a,b;
 cin>>a>>b;
  r=min(a,b);
 while(r>0){
 
 if(a%r==0&&b%r==0)
 {
 	
 	cout<<r<<endl;
 	break;
 }
 r--;
 


}
	return 0;

}