#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lastDigit = n % 10;
    int numDigits = log10(n); // Number of digits minus 1
    int firstDigit = n / pow(10, numDigits);
 
    int middlePart = (n % int (pow(10, numDigits))) / 10;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Middle part: " << middlePart << endl;
    cout << "Number of digits: " << numDigits + 1 << endl; // +1 to account for zero-based indexing
    cout << "First digit: " << firstDigit << endl;

    return 0;
}
