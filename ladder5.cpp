#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count500=n / 500;
    n %= 500;

    int count200 =n / 200;
    n %= 200;

    int count100 =n / 100;
    n %= 100;

    int count50 =n/ 50;
    n %= 50;

    int count20 =n/ 20;
    n %= 20;

    int count10 =n / 10;
    n %= 10;

    int count5 =n/ 5;
    n %= 5;

    int count2 =n/ 2;
    n %= 2;

    int count1 =n;

    if (count500 > 0)
	 cout << "500 Rs notes: " << count500 << endl;
    if (count200 > 0) cout<< "200 Rs notes: "<< count200 << endl;
    if (count100 > 0) cout<< "100 Rs notes: "<< count100 << endl;
    if (count50 > 0) cout<< "50 Rs notes: "<< count50 << endl;
    if (count20 > 0) cout << "20 Rs notes: "<< count20 << endl;
    if (count10 > 0) cout << "10 Rs notes: "<< count10 << endl;
    if (count5 > 0) cout << "5 Rs coins: "<< count5 << endl;
    if (count2 > 0) cout << "2 Rs coins: "<< count2 << endl;
    if (count1 > 0) cout << "1 Rs coins: "<< count1 << endl;

    return 0;
}