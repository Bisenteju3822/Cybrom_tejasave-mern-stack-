#include <iostream>
using namespace std;

int Dealer(int n)
{
  int realp = 90;
  int profit = 5;
  int ownerp = realp + profit;
  cout << "Real price to owner of petrol pump: " << realp << " per litre" << endl;
  cout << "Petrol price after profit to owner: " << ownerp << " per litre" << endl;
  cout << "Total petrol price to customer for " << n << " litres: " << n * ownerp << endl;
  return ownerp;
}

int main()
{
  int n;
  cout << "Enter petrol in litres: ";
  cin >> n;
  int pricePerLitre = Dealer(n);
  cout << "Real price per litre to customer: " << pricePerLitre << endl;

  return 0;
}