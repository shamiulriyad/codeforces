#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << arr[0] << endl;
        } else {
            int a1 = arr[0];
            int a2 = arr[1];
            cout << min(2 * a1, a1 + a2) << endl;
        }
    }

    return 0;
}
