#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int T, n;
	int x1, y1, x2, y2;
	int cx, cy, r;
	int cnt = 0;
	cin >> T;
	for (int j = 0; j < T; j++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> cx >> cy >> r;
			int dist1 = pow(cx - x1, 2) + pow(cy - y1, 2);
			int dist2 = pow(cx - x2, 2) + pow(cy - y2, 2);
			if (pow(r, 2) > dist1 ^ pow(r, 2) > dist2) cnt++;
		}
		cout << cnt << endl;
	}
}