/*



*/




#include <bits/stdc++.h>
using namespace std;
const long long MOD = 676767677;

bool check(vector<int>& a, int f) {
    int n = a.size();
    vector<int> s(n - 1);
    for(int i = 0; i < n - 1; i++) {


        int val = a[i + 1] - a[i] + 1;


        if(val<0|| val >2) return false;





        s[i] = val;





    }

    vector<int>L(n);
    L[0]=f;

    for(int i = 0; i<n-1;i++) {
        L[i + 1]=s[i]-L[i];






        if(L[i + 1]!=0&&L[i + 1]!=1)
        
        return false;
    }

   int bamejabo= 0;
for(int i = 0;i<n;i++) bamejabo += L[i];

    vector<int>p(n + 1, 0);
    for(int i = 1; i <= n; i++) p[i] = p[i - 1] + L[i - 1];

    for(int i=0;i<n;i++) {
        int ai=(n-bamejabo)-i+2*p[i]+L[i];
        if(ai!=a[i]) return false;
    }
    return true;
}

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    if(n==1) {
        cout <<(a[0] == 1 ? 2 : 0);
        return;
    }

    int upai= 0;
    if (check(a, 0))upai++;
    if (check(a, 1))upai++;
    cout << upai%MOD;
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << '\n';
    }

    return 0;
}
