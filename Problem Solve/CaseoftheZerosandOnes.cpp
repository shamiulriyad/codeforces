#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    for(char c : s){
        if(!st.empty() && ((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0'))){
            st.pop(); 
        } 
        else {
            st.push(c);
        }
    }

    cout << st.size() << endl;

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
