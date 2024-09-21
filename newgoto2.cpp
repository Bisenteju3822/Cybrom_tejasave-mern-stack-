#include<iostream>
using namespace std;
int main()

{  /*goto name;
	cout<<"name";
	cout<<"teju";
	name:
//	cout<<"name";
//	cout<<"teju";
//}//*/
int n,i=1;
cin>>n;
name:
	cout<<n*i<<endl;
	i++;
	if(i<=10){
		goto name;
	}
	
}
