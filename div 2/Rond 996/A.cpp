#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b; 
        int distance = abs(b - a);
        if (distance % 2 == 1) {
            cout << "no" << endl; 
        } else {
            cout << "yes" << endl; 
        }
    }
    return 0;
}
