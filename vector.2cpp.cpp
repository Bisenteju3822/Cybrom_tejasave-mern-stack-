#include<iostream>
#include<vector>
using namespace std;
class Product{
	int id;
	string name;
	double budget;
	void setInf(int id,string name,double budget){
		this->id=id;
		this->name=name;
		this->price=price;
		
		
	}
	void print (){
		cout<<"productid"<<"\t"<<endl;
		cout<<"product name"<<"\t"<<endl;
		cout<<"product price"<<"\t"<<endl;
		
	}
		

};
int main(){
	vector<Product> v;
    Product p1,p2,p3;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    int id;
    string n;
    double pi;
    for(Product p:v){
    	cout<<"Enter your product id"<<endl;
    	cin>>id;
    	cout<<"Enter your product name"<<endl;
    	cin>>n;
    	cout<<"Enter your product budget"<<endl;    
		cin>>budget;
			
	}
    
    
	



	return 0;
}
