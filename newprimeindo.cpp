#include <iostream>
using namespace std;

int main() {
    int n;
    int f = 1;
    cin >> n;
    int i = 2;
    do {
    	if(n==2){
    		f=1;
    		break;
		}
        if (n % i == 0) {
            f = 0;
            break;
        }
        i++;
    } while (i <= n / 2); // Use <= to ensure proper divisor checking

    cout << ((f == 1) ? "prime" : "not prime") << endl;

    return 0;
}