

#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
 int n,m;
        cin >> n >> m;

        vector<int> a(m+2,-1);
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            a[x]=y;
        }

        int p[2]={0,-1},c[2];
        for(int i=1;i<=m;i++){
            c[0]=c[1]=-1;
            for(int s=0;s<=1;s++){
                if(a[i]!=-1 && s!=a[i]) continue;
                for(int ps=0;ps<=1;ps++){
                    if(p[ps]!=-1){
                        int v=p[ps]+(ps!=s);
                        c[s]=max(c[s],v);
                    }
                }
            }
            p[0]=c[0];
            p[1]=c[1];
        }

        cout << max(p[0],p[1]) << endl;
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
