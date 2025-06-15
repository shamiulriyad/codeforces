#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    if(ar[0] == ar[n-1]){
        cout << "N0\n";

    }
    else{
        cout << "YES\n";
        if(ar[n-1]== ar[1]){
            cout << "RR";
            for(int i=0; i<n; i++){
                cout << "B";
            }
        }
        else {
            cout << "R";
            for(int i=0; i<n; i++){

            }
        }
        cout << '\n';
    }
}
}
