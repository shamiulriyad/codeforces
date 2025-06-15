#include <bits/stdc++.h>
using namespace std;
int t,n,m,a[100005],b[100005];


void solve(int tc)
{
    cin>>n;m=n/2+1;
		for(int i=1;i<=n;i++)cin>>a[i],b[i]=abs(a[i]);
		stable_sort(b+1,b+n+1);
		if(abs(a[1])<=b[m])cout<<"YES";
		else cout<<"NO";
		cout<<endl;
   
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
