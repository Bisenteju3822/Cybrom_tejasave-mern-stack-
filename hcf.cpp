#include<iostream>
using namespace std;
int calchcf(int x,int y){
	while(y!=0){
		int temp=x;
		y=x%y;
		x=temp;
		return x;
		
	}
}
	int calclcm(int x,int y) {
		return(x*y)/calchcf(x,y);
		
	}
	

int main(){
	int x1;
	int y1;
//	int z1;
//	int z2;
	cin>>x1>>y1;
	cout<<"hcf"<<endl;
  int hcf=calchcf(x1,y1);
  int lcm=calclcm(x1,y1);
	
	cout<<"hcf of"<<x1<<"and"<<y1<<"is"<<hcf<<endl;
		cout<<"lcm of"<<x1<<"and"<<y1<<"is"<<lcm<<endl;

}
