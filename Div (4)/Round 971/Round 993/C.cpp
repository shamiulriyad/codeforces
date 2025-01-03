#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long seated_in_row1 = min(a, m);
        long long seated_in_row2 = min(b, m);

        long long remaining_row1 = m - seated_in_row1;
        long long remaining_row2 = m - seated_in_row2;

        long long seated_from_c = min(c, remaining_row1 + remaining_row2);

        long long total_seated = seated_in_row1 + seated_in_row2 + seated_from_c;

        cout << total_seated << endl;
    }

    return 0;
}
