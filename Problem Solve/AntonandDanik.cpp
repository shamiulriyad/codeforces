#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    char str[1000000];
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    //cin >> str;
    int anton=0;
    int danik=0;
    //int s =strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            anton++;
        }
        else if(str[i]=='D'){
            danik++;
        }
        

    }
    if(anton>danik){
        cout << "Anton" << endl;
    }
    else if(anton < danik){
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
     
   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
   // cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
