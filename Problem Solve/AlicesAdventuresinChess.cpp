#include <bits/stdc++.h>
using namespace std;
int n,x,y,a,b;
string s;

void solve(int tc)
{
    cin>>n>>x>>y>>s;a=b=0;
	for(int i=0;i<=100;i++){
		for(char k : s){
			if(a==x&&b==y)
				return void(cout<<"Yes\n");
			if(k=='E')a++;
			if(k=='N')b++;
			if(k=='S')b--;
			if(k=='W')a--;
		}
	}cout<<"No\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << endl;
    }

    return 0;
}
