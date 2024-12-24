#include <iostream>
using namespace std;

class teju
{
  // Declare the member function 'show' as private
  void show()
  {
    cout << "teju" << endl;
  }

  // Declare the friend function
  friend void show(teju &b);
};

// Define the friend function
void show(teju &b)
{
  // The friend function can access the private member function 'show' of 'teju'
  b.show();
}

int main()
{
  teju b;
  show(b); // Call the friend function and pass the object 'b'
  return 0;
}
