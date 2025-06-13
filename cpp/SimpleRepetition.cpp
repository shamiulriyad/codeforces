#include <bits/stdc++.h>
using namespace std;

bool isprime(int x){
    if(x<=1)return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}

void solve(int tc)
{
    int x, k;
  cin >> x >> k;
  if (k > 1 && x > 1) {
    cout << "NO";
  } else if (k == 1) {
    cout << (isprime(x) ? "YES" : "NO");
  } else {
    cout << ((k == 2) ? "YES" : "NO");
  }
  cout << endl;
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
