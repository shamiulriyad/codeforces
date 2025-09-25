#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int a;
    cin >> a;
    int op = 0;

    vector<int>v(a);
    int cn = 0, cz = 0;
    for(int i=0;i<a;i++){
        cin >> v[i];
        if(v[i]==-1) cn++;
        else if(v[i]==0) cz++;
    }
    for(int i=0;i<a;i++){
        if(v[i]==0){
            v[i]=1;
            op++;
        }
    }
    if(cn % 2 != 0){
        for(int i=0;i<a;i++){
            if(v[i]==-1){
                v[i]=1;
                op += 2;
                break;
            }
        }
    }

    cout << op << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tt;
    cin >> tt;

    for(int tc = 1; tc <= tt; tc++)
        solve(tc);

    return 0;
}
