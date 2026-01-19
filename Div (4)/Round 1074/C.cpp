#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        
        
        set<int>s(a.begin(), a.end());

        vector<int>abc(s.begin(),s.end());
        
    
        int d= 1;
        int r= 1;
        int count= abc.size();
        
        for(int i=1;i<count;i++){
            if(abc[i]== abc[i-1]+1){
                r++;
                d=max(d,r);
            }
            else{
                r= 1;
            }
        }
        
        if(abc.empty()){
            d= 0;    
        }
        
        cout << d << "\n";
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
