
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int j = 0; j < n; j++) std::cin >> b[j];

    int count = 0;
    int i = 0, j = 0;

    while (i < n) {
        while (j < n && a[i] > b[j]) {
            count++;
            j++;
        }
        i++;
    }

    std::cout << count << std::endl;

    return 0;
}


