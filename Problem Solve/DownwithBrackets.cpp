#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    string s;
    cin>> s;
 
    stack<char> stk;
    int seq = 0;
 
    for(char c : s){
        if(stk.empty()){
            seq++;
            stk.push(c);
        }
        else if(c == '(') stk.push(c);
        else stk.pop();
    }
    if(seq > 1) cout << "YES\n";
    else cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tt;
    cin >> tt;

    for (int tc = 1; tc <= tt; tc++)
    {
        solve(tc);
    }

    return 0;
}
