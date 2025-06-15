#include<iostream>

using namespace std;
int main()
{
    int  t,a ,b,m, n;
    cin >> t;
    while(t--){
            cin >> a >> b >> m >> n;
        if((a>b && m<n) || (a<b && m>n))
        cout << "NO\n";
        else{
            cout << "yes\n";
        }
    }
    return 0;
}