#include <bits/stdc++.h>
using namespace std;
int M;
char pat[1000000+10],txt[1000000+10];
int b[1000000+10];
void parina(){
    int i = 1;
    int len = 0;
    b[0]  = len = 0;
    while(i <M){
        if(pat[i]==pat[len]){
            len++;
            b[i]= len;
            i++;
        }
        else if(len == 0){
            b[i] = 0;
            i++;
        }
        else{
            len = b[len-1];
         }
    }
}
int usekorsialgo() {
    int k = 0;
    for(int i = 0; i < M; i++) {
        while(k && pat[k]!=txt[i])
            k = b[k - 1];
        if(pat[k] == txt[i]) k++;
    }
    return k;
}


void solve(int tc)
{
     int t;
    cin >> t;
    
        scanf("%s", txt);
        M = strlen(txt);
        strcpy(pat, txt);
        reverse(pat, pat + M);
        parina();
        int my=usekorsialgo();
        int res = 2*M-my;
        cout << res << endl;


    
   
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