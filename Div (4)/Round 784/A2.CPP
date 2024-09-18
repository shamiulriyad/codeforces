#include <iostream>
#include <cstdio> 

using namespace std;

int a;

int main() {
    cin >> a; 
    while (cin >> a) {
        printf("Division %d\n", (a < 1400 ? 4 : (a < 1600 ? 3 : (a < 1900 ? 2 : 1))));
    }
    return 0;
}
