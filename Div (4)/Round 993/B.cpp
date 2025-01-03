#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b = "";
        cin >> a;

        for (char c : a) {
            if (c == 'p') b += 'q';
            else if (c == 'q') b += 'p';
            else if (c == 'w') b += 'w';
        }
        reverse(b.begin(), b.end()); 
        cout << b << endl;
    }

    return 0;
}
