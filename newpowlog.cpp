#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

   int lastDigit = n % 10;  // Get the last digit*/
    int numDigits = log10(n);  // Get the number of digits - 1
   int firstDigit = n / pow(10, numDigits);  // Get the first digit*/

    // Remove the first and last digits and get the middle part
    int middlePart = (n % int (pow(10, numDigits))) / 10;

    // Construct the new number with swapped digits
    int newNumber = lastDigit * pow(10, numDigits) + middlePart * 10 + firstDigit;

    cout << "Number with swapped first and last digits: " << newNumber << endl;
  cout<<middlePart<<endl;
    return 0;
}