#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n, m, h;
    cin >> n >> m >> h;
    
    vector<long long> d(n);
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    
    vector<long long> ami = d;
  
    vector<int>count(n, -1);
    int count2= -1;
    
    for(int j= 0; j < m; j++){
        int b, c;

        cin >> b >> c;

        b--;
        
        
        if(count[b] <= count2){
            ami[b] = d[b];
        }
        
        ami[b] += c;

        
        count[b] = j;
        
        if(ami[b] > h){
            count2 = j;
           
        }
    }
    

    for(int i=0;i<n;i++){
        if(count[i] > count2){
            cout << ami[i] << " ";
        } else {
            cout << d[i] << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        if(tc < tt) cout << endl;
    }

    return 0;
}