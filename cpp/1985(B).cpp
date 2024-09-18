#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 3) // Use == for comparison
            cout << n << endl;
        else
            cout << "2\n";
    }
    return 0;
}
