#include <bits/stdc++.h>
using namespace std;

int ans(int n,char a[], char c){
    int  d = 0;
    for(int i=0;i<n;i++){



        if(a[i]==c&&(i==0||a[i-1]!=c))

            d++;






    }


    
    return d++;
}

void solve()
{
    int n;
    cin >> n;
    char a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];



    }   

    int acountkori =ans(n,a,'a');


    int bcountkori=ans(n,a,'b');

    int ans2 =min(acountkori,bcountkori);

    if(ans2>0)ans2--; 

    cout << ans2 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;

    for(int i = 1; i <= tc; i++)
        solve();

    return 0;
}
