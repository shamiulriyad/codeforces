#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        
        char a = 'A'^'B'^'C',x;
        for(int i=0; i<9; i++){
            cin >> x;
            if (x != '?') a ^= x;
        }
        cout << a <<endl;
    }
}