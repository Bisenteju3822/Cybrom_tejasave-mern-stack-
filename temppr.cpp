#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Size of the vector
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (const auto &p : v) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}

