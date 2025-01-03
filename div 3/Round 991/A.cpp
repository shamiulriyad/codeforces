#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string>word(n);
        for(int i=0;i<n;i++){
            cin >> word[i];
        }
        int cournt_l=0; count =0;
        for(const string& word : words){
            if(cournt_l + word.length() <= m){
                cournt_l += word.length();
                count ++;
            }
            else{
                break;
            }
        }
    cout << count << endl;
}
}
