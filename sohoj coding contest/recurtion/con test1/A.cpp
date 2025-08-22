#include <bits/stdc++.h>
using namespace std;

bool vaulehobe(char c){
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

void vaulehobe_na(string &s,int a){
    if(a==s.size()) return;
    if(!vaulehobe(s[a])) cout<<s[a];
    vaulehobe_na(s,a+1);
}

void solve(){
    string s;
    cin >> s;
    vaulehobe_na(s,0);
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++){
        solve();
        cout << '\n';
    }
}
