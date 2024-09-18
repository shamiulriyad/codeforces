#include<iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans1 = abs(a-b)+abs(a-c);
        int ans2 = abs(b-a)+abs(b-c);
        int ans3 = abs(c-a)+abs(c-b);
        int ans = min (ans1, min(ans2,ans3));

        cout << ans << endl;
    }
    return 0;

}
