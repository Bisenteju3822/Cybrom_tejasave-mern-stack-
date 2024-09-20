 #include<iostream>
 using namespace std;
  bool armstrong(int num){
  	 int t=0;
  	int o=num;
  	while(num!=0){
	  
 int r=	num%10;
   t=t+r*r*r;
   num=num/10;
}
  	
  	return(t==o);
  	
  	  
  }
  int main(){
  	int n;
  	cout<<armstrong(370)?"yes":"No";
  }