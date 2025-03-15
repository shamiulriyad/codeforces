#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSorted(const vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        bool possible = false;
        for (int j = 0; j < m; ++j) {
            vector<int> temp_a = a; 

            for (int i = 0; i < n; ++i) {
                temp_a[i] -= b[j];
            }

            if (isSorted(temp_a)) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}