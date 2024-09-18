#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int hh;
        cin >> hh;
        string str1;
        cin >> str1;
        if(hh==0)cout << 12 << str1 << " AM\n";
            else if (hh <= 11){
                if (hh<10) cout << 0 << hh;
                else cout << hh ;
                cout << str1 << " AM\n";
            }
            else if(hh==12)cout << hh << str1 << " PM\n";
            else if (hh>12){
                if(hh-12>10)cout << 0 << hh-12;
                else cout << hh-12;
                cout << str1 << " PM\n";
            }
    }
    return 0;
}