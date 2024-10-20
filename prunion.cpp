#include <iostream>
using namespace std;

union Person
{
  char name[20];
  int age;
  float height;
};

int main()
{
  Person P;

  // Using strncpy to safely copy string to char array
  strncpy(P.name, "teju", sizeof(P.name));
  P.name[sizeof(P.name) - 1] = '\0'; // Ensure null-termination
  cout << "Name: " << P.name << endl;

  P.age = 22;
  cout << "Age: " << P.age << endl;

  P.height = 5.9;
  cout << "Height: " << P.height << endl;

  return 0;
}