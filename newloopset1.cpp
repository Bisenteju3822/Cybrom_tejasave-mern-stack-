#include<iostream>
using namespace std;
int main(){

int n,r;

for(int i=100;i<=200;i++){
   
int n=i;   
int c=0;
int temp=n;
 while(temp!=0){
 
   r=temp%10;
   c=c*10+r;
   temp=temp/10;

}
if(i==c){
 cout<<i<<"palindrom"<<endl;	
}
}

return 0;
}
