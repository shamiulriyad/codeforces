#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    string n;
    cin>>n;
		int cnt=0,l=0;
		for(int i=0;i<n.size();++i){
			if(n[i]!='0')++cnt,l=i+1;
		}
		cout<<cnt-1+n.size()-l<<endl;
	
   
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
