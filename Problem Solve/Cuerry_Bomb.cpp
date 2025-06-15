
    #include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int a[200005],b[200005];
	    int n,k;
	    cin>>n>>k;
	    for(int i=1;i<=n;i++)cin>>a[i];
	    for(int i=1;i<=n;i++)cin>>b[i];
	    int l=0,r=2*k;
	    for(int i=1;i<=n;i++){
	        l=max(l,a[i]);
	        r=min(r,a[i]+k);
	        if(b[i]!=-1){
	            l=max(a[i]+b[i],l);
	            r=min(a[i]+b[i],r);
	        }
	    }
	    cout<<max(0,r-l+1)<<endl;
   
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
