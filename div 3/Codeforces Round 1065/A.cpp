#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;

    cin >> n;
    if(n%2==1){
        cout<< "0"<<"\n";
    }    
    else{
        cout<< (n/4)+1 << "\n";
    }
   
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
