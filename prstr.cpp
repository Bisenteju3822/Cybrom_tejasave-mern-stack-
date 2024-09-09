#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string First_name;
    string Last_name;
    int standard;
};
int main() {
    Student infor1;
   
   cin>>infor1.age>>infor1.First_name>>infor1.Last_name>>infor1.standard;
        

cout<<infor1.age<<"\t"<<infor1.First_name<<"\t"<<infor1.Last_name<<"\t"<<infor1.standard;



return 0;
}
