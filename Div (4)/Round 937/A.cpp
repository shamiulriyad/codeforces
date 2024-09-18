#include<iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--){
    int a, b, c;
    cin >> a ;
    cin >> b;
    cin >> c;

    if(a < b && b < c){
        cout << "STAIR\n" ;
    }
    else if(a< b && b > c){
        cout << "PEAK\n";
    }
    else {
        cout << "NONE\n";
    }
    }
    return 0;
}