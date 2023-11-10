#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int T;
	int x1, y1, x2, y2, r1, r2;
	cin>>T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2 && r1 == r2) cout<<-1;
		else {
			double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
			if (dist > r1 + r2 || dist < abs(r1 - r2)) cout<< 0;
			else if (dist > abs(r1 - r2) && dist < r1 + r2) cout<< 2;
			else cout<<1;
		}
		cout << endl;
	}
}