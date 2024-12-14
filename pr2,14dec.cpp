#include <iostream>
using namespace std;

class Car
{
public:
  string brand;
  string model;
  int year;

  void displayInfo()
  {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
  }

  void honk()
  {
    cout << "Honk! Honk!" << endl;
  }
};

int main()
{
  // Create an object of the Car class
  Car myCar;
  myCar.brand = "Toyota";
  myCar.model = "Corolla";
  myCar.year = 2020;

  // Call methods on the Car object
  myCar.displayInfo();
  myCar.honk();

  return 0;
}
