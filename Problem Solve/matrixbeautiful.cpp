#include<iostream>
using namespace std;

int main() {
    int a;
    
    for (int i = 0; cin >> a; i++) {
        if (a) {
            cout << abs(2 - i / 5) + abs(2 - i % 5) << endl;
        }
    }
}
