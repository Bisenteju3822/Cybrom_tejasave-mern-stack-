#include <iostream>
using namespace std;

int pallu()
{
  int pallu = 1; // Initialize variable to a valid state
  if (pallu)
    cout << "pallu" << endl;
  else
    return -1;
  return 0; // Return 0 if pallu is printed
}

int teju(int n)
{
  if (n == 123)
  {
    cout << "pass match" << endl;
    return 0; // Return 0 if match is found
  }
  else
  {
    return -1; // Return -1 if no match
  }
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int tejuResult = teju(n);
  int palluResult = pallu();

  cout << "teju() result: " << tejuResult << endl;
  cout << "pallu() result: " << palluResult << endl;

  cout << "n == " << n << endl;

  return 0;
}