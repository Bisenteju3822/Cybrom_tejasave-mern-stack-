#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int n = 100; n <= 200; n++) {
        int num = n;
        int numDigits = log10(num);
        int lastDigit = num % 10;
        int firstDigit = num / pow(10, numDigits);

        // Remove the first and last digits and get the middle part
        int middlePart = (num % static_cast<int>(pow(10, numDigits))) / 10;

        // Construct the new number with swapped digits
        int newNumber = lastDigit * pow(10, numDigits) + middlePart * 10 + firstDigit;

        cout << "Original number: " << n << ", New number: " << newNumber << endl;
    }

    return 0;
}
