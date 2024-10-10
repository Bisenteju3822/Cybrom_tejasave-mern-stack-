#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0)
        return x;
    return gcd(x, x % y);
}

int main() {
    int x = 24, y = 12;
    cout << "The HCF of " << x << " and " << y << " is: " << gcd(a, b) << endl;
    return 0;
}
