#include "bits/stdc++.h"

using namespace std;

int n, k, m;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        cin >> n >> k >> m;
        if (k > m) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
            for (int i = 1; i <= n; i++) {
                if (i % k == 0) {
                    cout << m - k + 1 << " ";
                } else {
                    cout << 1 << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
