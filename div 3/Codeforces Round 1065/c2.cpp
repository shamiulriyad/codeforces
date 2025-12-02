#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    int total_xor = 0;
    for(int i = 0; i < n; i++) {
        total_xor ^= (a[i] ^ b[i]);
    }
    
   
    for(int bit = 20; bit >= 0; bit--) {
        int mask = 1 << bit;
        
       
        if(!(total_xor & mask)) continue;
        
        int cnt_odd = 0, cnt_even = 0;
        for(int i = 0; i < n; i++) {
            int diff = a[i] ^ b[i];
            if(diff & mask) {
                if((i + 1) % 2 == 1) {
                    cnt_odd++;
                }
                 else {
                    cnt_even++;
                }
            }
        }
        
       
        if(cnt_odd > cnt_even) {
            cout << "Ajisai\n";
            return;
        }else if (cnt_odd < cnt_even) {
            cout << "Mai\n";
            return;
        }else {
           
            int last_special = -1;
            for(int i = 0; i < n; i++) {
                int diff = a[i] ^ b[i];
                if (diff & mask) {
                    last_special = i;
                }
            }
            
            if(last_special != -1) {
                if((last_special + 1) % 2 == 1) {
                    cout << "Ajisai\n";
                }
                else {
                    cout << "Mai\n";
                }
                return;
            }
            
        }
    }
    
 
    cout << "Tie\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}