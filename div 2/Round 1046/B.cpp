#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
          string s;
        cin >> n >> k;
        cin >> s;
          vector<int> p(n);
        int big = n;  
        int small = 1;
for(int i = 0; i < n; i++) {
            if(s[i]=='1') {
                p[i]=big;
                big--;
            }else{
                p[i] = small;
                     small++;
            }
        }

    cout << "YES\n";
        for(int i = 0; i < n; i++) {
            cout<< p[i] << " ";
        }
                    cout << "\n";
    }
    return 0;
}
