#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; // Size of the vector
    cin >> x;
    vector<int> b;
    for (int i = 0; i < x; ++i) {
        int v;
        cin >> v;
        b.push_back(v);
    }
    for (const auto &p : b) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}

