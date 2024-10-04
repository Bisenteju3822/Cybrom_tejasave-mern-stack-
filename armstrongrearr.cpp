#include<iostream>
using namespace std;
bool armstrong(int m){
	  int org=m;
	  cin>>m;
	  int c=0;
	  int r;
	  while(m!=0){
	  	r=m%10;
	  	c=c+r*r*r;
	  	m=m/10;
	  	
	  }
	  if(m=c){
	  	cout<<"It is armstrong"<<endl;
	  	
	  }
	  else{
	  	cout<<"not a armstrong"<<endl;
	  }
	  cout<<c<<endl;
	  return true;
}
bool Farm(bool(*armstrong)(int),int arr[],int n){
	for(int i=0;i<n;i++){
		if(armstrong(arr[i])){
		
			cout<<arr[i]<<"armstrong"<<endl;
		}
		else{
			cout<<"Not armstrong"<<endl;
		}
}
}
int main(){
int arr[5]={444,345,222,555};
int n=4;
int m;

Farm(armstrong,arr,n);

	return 0;
}