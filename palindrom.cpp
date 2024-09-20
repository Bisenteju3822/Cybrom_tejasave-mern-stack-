 #include<iostream>
 using namespace std;
   bool palinornot(int num){
   	int original=num;
   		int t=0;
   		 
   	 while(num!=0){
	
		
		t=(t*10 )+(num%10);
		num=num/10;
	
	
	}
		return (t==original);
		
   	 
   }
 int main(){
 	int n;
 	
 
 cout<<palinornot(121)?"yes":"no";
  
 return 0;
}