#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 100; i <= 5000; i++) {
        int num = i;
        int sum = 0;


        int temp = num;
        while (temp != 0) {
            int remainder = temp % 10;
            sum += remainder*remainder*remainder;
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " is an Armstrong number." << endl;
        }
    }

    return 0;
}