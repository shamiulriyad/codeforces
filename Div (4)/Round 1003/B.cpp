#include <iostream>
using namespace std;

int minAchievableLength(string s) {
    int n = s.size();
    int ans = n;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            ans--;  
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minAchievableLength(s) << endl;
    }
    return 0;
}

