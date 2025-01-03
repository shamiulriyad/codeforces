#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle_sum = a + b + c;
        long long cycles = n / cycle_sum;
        long long remaining_distance = n % cycle_sum;

        int day = cycles * 3; 

        if (remaining_distance > 0) {
            if (remaining_distance <= a) {
                day++;
            } else if (remaining_distance <= a + b) {
                day += 2;
            } else {
                day += 3;
            }
        }

        cout << day << endl;
    }

    return 0;
}