#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n; 
    vector<int> a(n);
    for(int i=0;i<n; i++) cin >> a[i];

    unordered_map<int,int> freq;
    bool ami = false; 

    for(auto x: a) {
        freq[x]++;
        if(freq[x] >= 2) {
            ami = true;  
        }
    }

    if(ami) cout << "YES";
    else cout << "NO";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << endl;
    }

    return 0;
}
