#include <iostream>

using namespace std;
int main() {
	long double A;
	long double B;
	cin >> A >> B;

	cout << fixed;
	cout.precision(15);
	cout << A / B << endl;

	return 0;
}