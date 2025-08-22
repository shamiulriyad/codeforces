#include <bits/stdc++.h>
using namespace std;
int T,n,a[1000005];


void solve(int tc)
{
    cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n/2;i++){
			if(a[i]<a[n-i+1])(i&1)?cout<<"LR":cout<<"RL";
			else (i&1)?cout<<"RL":cout<<"LR";
		}if(n&1)cout<<"L";cout<<"\n";
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
