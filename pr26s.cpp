#include<iostream>//com
using namespace std;
class axis{
	int amount=1000;
	friend class RBI;
};
class sbi{
	int amount =3000;
	friend class RBI;
};
class RBI{
	public:void balanceaxis(axis a){
		cout<<"balance of axis:::"<<a.amount<<endl;
	}
	public:void balancesbi(sbi s){
		cout<<"balance of sbi:::"<<s.amount<<endl;
	}
};
int main(){
	axis a;
	sbi s;
	RBI r;
	r.balanceaxis(a);
	r.balancesbi(s);



	return 0;
}
