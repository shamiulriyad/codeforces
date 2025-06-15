#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

void solve()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i=i+2){
        for(int j=i+2;j<s.size();j=j+2){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    

        }
        cout << s;
    }

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}