#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int c;
    cin >> c;
    vector<char> a(c);
    for(int i = 0; i < c; i++){
        cin >> a[i];
    }

    vector<bool> seen(26, false); 
    for(int i = 0; i < c; i++){
        char ch = tolower(a[i]); 
        seen[ch - 'a'] = true;
    }

    bool pangram = true;
    for(int i = 0; i < 26; i++){
        if(!seen[i]){
            pangram = false;
            break;
        }
    }

    if(pangram){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    // cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << endl;
    }

    return 0;
}
