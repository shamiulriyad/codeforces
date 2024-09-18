#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, sum;
        cin >> a >> b >> c;
        if(a<=c && c<=b){
            
            sum = (c-a)+(b-c);
            c+=5;
            
            cout << sum << endl;
            
        }

    }
}