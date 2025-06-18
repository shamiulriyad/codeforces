#include <bits/stdc++.h>
using namespace std;
int n,m,a[2002],b[2002],f;

void solve(int tc)
{
    cin>>n>>m;
	f=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[j];
			if(a[j]%n!=a[1]%n) f=0;
		}
		b[a[1]%n+1]=i;
	}
	if(!f) cout<<-1;
	else for(int j=1;j<=n;j++) cout<<b[j]<<' ';
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
