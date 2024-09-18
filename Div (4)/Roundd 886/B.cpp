#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mx=0, ans;
        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
            if(a<=10){
                if(b>mx){
                    mx=b;
                    ans=i+1;
                }
            }
        }
        cout << ans << endl;
    }
}