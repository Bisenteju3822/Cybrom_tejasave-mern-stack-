#include <iostream>
using namespace std;

int main() {   
    for (int n = 100; n <= 200; n++) {
        int f=1;
        // Check if n is a prime number
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
               f=0;
                break;
            }
        }

        if (f==1) {
            cout << n << " is a prime number." << endl;
        }
    }

    return 0;
}
