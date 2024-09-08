#include<iostream>
#include<vector>
using namespace std;
 vector<int>  marks={1,2,3,4,5,6,7};
int main(){
//	int A=marks[0];
//	int B=marks[1];
	int max=0;
	max=marks[0];
 int 	min=marks[0];
	for(int mark :marks){
		if(max<mark){
			max=mark;
					cout<<mark<<endl;

		
		//if(min>mark){
		//	min=mark;
			
		}
		
	}
	cout<<"Maximum mark:"<<max<<endl;
		//cout<<"Minimum mark:"<<min<<endl;

	return 0;
}