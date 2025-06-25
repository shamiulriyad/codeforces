#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,tmp;

void solve(int tc)
{
    cin>>a>>b>>c>>d;
		if(a>b){tmp=a;a=b;b=tmp;}
		cout<<((a<c&&c<b)!=(a<d&&d<b)?"YES\n":"NO\n");
   
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
