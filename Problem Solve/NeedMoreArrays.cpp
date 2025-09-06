
/*MY  code 👉 Appross: ≈ "Finds how many elements you can pick from the array such that every chosen element is at least 2 greater than the previous one."*/








#include <bits/stdc++.h>
using namespace std;

int solvemorearrays(vector<int>&a){
    int n=a.size();
    if(n==0) return 0;
     if(n==1) return 1;
     int ans=1;
     int lastnisi=a[0];
     for(int i=1;i<n;i++){
        if(a[i]>lastnisi+1){
            ans++;
            lastnisi=a[i];
        }
     }
    // cout << ans << "\n" << endl;
    return ans;

}

void solve(int tc)
{
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

   cout <<  solvemorearrays(a) << "\n"; 
   
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
