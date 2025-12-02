#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
     int n;
        cin >> n;
        vector<int> a(n), b(n);

        int jobde= 0, joblagbe= 0;
        int numberde= -1;

        for(int i=0;i<n;i++){
            cin>>a[i];

        }

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            jobde^=a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            joblagbe^= b[i];
            if (a[i] != b[i])= i + 1;
        }

        if (jobde ==joblagbe) {
            cout << "Tie\n";
        } else {
            if (numberde% 2 == 1)
                cout << "Ajisai\n";
            else
                cout << "Mai\n";
        }
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
