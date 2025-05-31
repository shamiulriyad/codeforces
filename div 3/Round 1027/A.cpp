#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = stoi(s);  // convert to integer
        int root = sqrt(num);

        if (root * root != num) {
            cout << -1 << endl;
            continue;
        }

        // Try all pairs a + b = root, with a <= b
        bool found = false;
        for (int a = 0; a <= root; ++a) {
            int b = root - a;
            if (a <= b) {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
