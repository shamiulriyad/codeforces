#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n,s;
    cin>>n>>s;
    int cnt=0;
    for(int i=0;i<n;i++) {
        int d1,d2,x1,x2;
        cin>>d1>>d2>>x1>>x2;
 
        if(x1+x2==s || (x1==x2  && ((d1+d2)!=0))) cnt++;
    }
    cout<<cnt<<endl;
   
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
