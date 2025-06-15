#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int cnt =0;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s[1]=='+')
        cnt++;
        else
        cnt--;
    }
    cout << cnt;

}