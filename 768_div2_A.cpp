
// Codeforces Round #768 Div.2 A

#include <iostream>
using namespace std;

int t, n, am, bm, a[101], b[101];

int main() {
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        for (int i = 0; i < n; i++) if (a[i] > b[i]) swap(a[i], b[i]);
        am = 0;
        bm = 0;

        for (int i = 0; i < n; i++) {
            am = max(am, a[i]);
            bm = max(bm, b[i]);
        }

        cout << am * bm << '\n';
    }
}