#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
    
        int n; 
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long ans;
        if(a[0]!=-1&&a[n-1]!=-1)
            ans=llabs(a[n-1]-a[0]);
        else
            ans=0;

        if(a[0]==-1&&a[n-1]==-1){

            a[0] = a[n-1] = 0;

        } 
        else if(a[0] == -1){

            a[0] = a[n-1];

        }
         else if(a[n-1] == -1){


            a[n-1] = a[0];


        }

        for(int i=1;i<n -1;i++)
            if(a[i]==-1) a[i] = 0;

        cout << ans<<"\n";
        for(int i=0; i < n; i++){
            if(i)cout << ' ';
            cout << a[i];
        }
        cout << "\n";
    
    
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
