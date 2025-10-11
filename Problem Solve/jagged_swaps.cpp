#include <bits/stdc++.h>
using namespace std;
 
 
void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool change=true;
    while(change){
        change=false;
 
    
 
    for(int i = 1; i < n-1; i++){
        if(a[i-1] < a[i] && a[i] > a[i+1]){
            swap(a[i], a[i+1]);
            change=true;
        }
    }
}
bool sorted=true;
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        sorted=false;
        break;
    }
}
if(sorted) cout << "YES" ;
else cout<< "NO";
    
    
 
   
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