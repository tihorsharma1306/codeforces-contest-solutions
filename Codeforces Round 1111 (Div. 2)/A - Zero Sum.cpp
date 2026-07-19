#include "bits/stdc++.h"

using namespace std;

int n;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        if (abs(sum) % 4 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
