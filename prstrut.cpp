#include <iostream>
using namespace std;

struct Person
{
  string name;
  int age;
  float height;
};

int main()
{
  Person p = {"Alice", 30, 5.7};
  cout << "Name: " << p.name << endl;
  cout << "Age: " << p.age << endl;
  cout << "Height: " << p.height << endl;
  return 0;
}