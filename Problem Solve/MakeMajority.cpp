#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    string s;
     cin >> s;
 
    char prev = '1';
    vector<int> v;
    for (char c : s)
    {
        if (c == '1')
            v.push_back(1);
        if (c == '0' && prev == '1')
            v.push_back(0);
        prev = c;
    }
 
    int ones = 0, zeros = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
            ones++;
        else
            zeros++;
    }
 
    if (ones > zeros)
        cout << "YES\n";
    else
        cout << "NO\n";

   
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
