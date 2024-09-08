#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> marks={1,5,4,3,7};
int main(){
sort(marks.begin(),marks.end());	
	cout<<"Sorted array in ascending order"<<endl;
	
	

for( int mark:marks){
		cout<<mark<<endl;
	}

}