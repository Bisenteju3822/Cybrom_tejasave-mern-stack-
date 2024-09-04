#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter the number of rows: ";
    cin >> y;

    for (int i = 1; i <= y; ++i) {
        for (int j = 1; j <= y - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
