#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    if(mp.size() == 1){
        cout << "YES" << "\n";
    }
    else if(mp.size() >=3){
        cout << "NO" << "\n";
    }
    else{
        vector<int> arr;
        for(auto it: mp){
            arr.push_back(it.second);
        }
        int diff = abs(arr[0]-arr[1]);
        if(diff <= 1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }

   
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
