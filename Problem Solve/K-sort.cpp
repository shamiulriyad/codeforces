
#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
cin>>n;
int a[n];
int mx=0,x=0;
long long ans=0;
for(int i=0;i<n;i++)
{cin>>a[i];
ans+=max(0,mx-a[i]);
x=max(x,mx-a[i]);
mx=max(mx,a[i]);}
cout<<ans+x<<endl;
   
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
