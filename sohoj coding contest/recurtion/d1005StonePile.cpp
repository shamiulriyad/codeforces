#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> w;

int recur(int idx, int sum1, int sum2) {
    if (idx == n) {
        return abs(sum1 - sum2);
    }
    int op1 = recur(idx + 1, sum1 + w[idx], sum2);
    int op2 = recur(idx + 1, sum1, sum2 + w[idx]);
    return min(op1, op2);
}

int main() {
    cin >> n;
    w.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    cout << recur(0, 0, 0) << endl;
    return 0;
}
