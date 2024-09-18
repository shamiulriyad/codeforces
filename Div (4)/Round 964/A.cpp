#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        /* code */
        int sum;
        int n; 
        cin >> n;
        sum = n%10 + n/10;
        
        cout << sum << endl;
    }
    
}