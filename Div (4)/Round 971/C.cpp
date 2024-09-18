#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
};

int countRightTriangles(const vector<Point>& points) {
    int n = points.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                // Calculate distances between points
                int dx1 = points[j].x - points[i].x;
                int dy1 = points[j].y - points[i].y;
                int dx2 = points[k].x - points[i].x;
                int dy2 = points[k].y - points[i].y;

                // Check if it's a right triangle
                if (dx1 * dx2 + dy1 * dy2 == 0) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Point> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i].x >> points[i].y;
        }

        int result = countRightTriangles(points);
        cout << result << endl;
    }

    return 0;
}