#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
        string s;
        cin >> s;
        int X=0;
        int Y=0;
        bool ok=false;
        for(int i=0; i<n; i++){
            if(s[i]=='U')Y++;
            if(s[i]=='D')Y--;
            if(s[i]=='R')X++;
            if(s[i]=='L')X--;
            if(X==1 && Y==1){
                ok=true;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;

        }
        else{
            cout << "NO" << endl;
        }

    }
}