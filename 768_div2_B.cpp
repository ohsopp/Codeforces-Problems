
// Codeforces Round #768 Div.2 B

#include <iostream>
using namespace std;

int t, nn, n, a[200002];

int main() {
    cin >> t;

    while (t--) {
        cin >> n;

        int k = 0;
        int res = 0;

        for (int i = 1; i <= n; i++) scanf("%d", a + i);

        while (1) {
            int x = n - k;
            while (x && a[x] == a[n]) {
                k++;
                x--;
            }

            if (k >= n) break;

            k *= 2;
            res++;
        }

        cout << res << '\n';
    }
}