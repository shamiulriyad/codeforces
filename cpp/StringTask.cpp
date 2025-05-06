#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans= " ";
    for(int i=0;i<s.size();i++){
        char ch = tolower(s[i]);
        if(ch == 'a'||ch == 'o'|| ch=='y'||ch =='e'||ch== 'u'|| ch == 'i'){
            continue;
        }
        else{
            ans +=".";
            ans +=ch;
        }
    }
    cout << ans << endl;

   
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}