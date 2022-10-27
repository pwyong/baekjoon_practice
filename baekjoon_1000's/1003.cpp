#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacci(int n) {
    int* cnt0 = new int[n + 1];
    int* cnt1 = new int[n + 1];
    cnt0[0] = 1; cnt0[1] = 0;
    cnt1[0] = 0; cnt1[1] = 1;
    if (n >= 2) {
        for (int i = 2; i <= n; i++) {
            cnt0[i] = cnt0[i - 1] + cnt0[i - 2];
            cnt1[i] = cnt1[i - 1] + cnt1[i - 2];
        }
    }
    return { cnt0[n],cnt1[n]};
}
int main() {
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N = 0;
        vector<int> result;
        cin >> N;
        result=fibonacci(N);
        cout << result.at(0) << " " << result.at(1) << endl;
    }
}