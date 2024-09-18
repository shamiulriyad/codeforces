#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n<=1399){
            cout << "Divition 4\n";
        }
        else if(n<=1400 || 1400<=1599){
            cout << "divition 3\n";
        }
        else if(n<=1600 || 1400<=1899){
            cout << "divition 2\n";
        }
        else {
            cout << "divition 1\n";
        }

    }
    return 0;
    
}