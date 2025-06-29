#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve(int tc)
{
    int n;
    cin >> n;
    vector<long long> nx(n);
    for(int i = 0; i < n; i++){
        cin >> nx[i];
    }
    long long re = nx[0];
    for(int i = 1; i < n; i++){
        re = gcd(re, nx[i]);
    }
    cout << re;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    solve(1);
    cout << "\n";

    return 0;
}
