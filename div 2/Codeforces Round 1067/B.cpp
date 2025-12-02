#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        int n; cin >> n;
        unordered_map<int,int> cnt;
        for(int i=0;i<2*n;i++){
            int a; cin >> a;
            cnt[a]++;
        }
        int O = 0, E = 0;
        for(auto &p : cnt){
            if(p.second % 2) ++O;
            else ++E;
        }
        int K = min(E, n);
        if(O == 0 && (K % 2) != (n % 2)){
            --K;
            if(K < 0){
                 K = 0;
            }
        }
        cout << (O + 2 * K) << '\n';
    }
    return 0;
}

