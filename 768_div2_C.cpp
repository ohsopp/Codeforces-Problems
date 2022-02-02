
// Codeforces Round #768 Div.2 C 

#include <iostream>
using namespace std;

int t;

void solution() {

	int n, k;

	cin >> n >> k;

	if (k == n - 1) {
		if (n == 4)
			cout << -1 << '\n';
		else {
			cout << n - 1 << " " << n - 2 << '\n';
			cout << n / 2 - 1 << " " << 1 << '\n';
			cout << 0 << " " << n / 2 << '\n';
			for (int i = 2; i < n / 2 - 1; i++)
				cout << i << " " << ((n - 1) ^ i) << '\n';
		}
	}
	else if (k == 0) {
		for (int i = 0; i < n / 2; i++)
			cout << i << " " << ((n - 1) ^ i) << '\n';
	}
	else {	// 1 <= k <= n-2 일 때
		cout << n - 1 << " " << k << '\n';
		cout << 0 << " " << ((n - 1) ^ k) << '\n';
		for (int i = 0; i < n / 2; i++) {
			if (i == 0 || i == k || i == ((n - 1) ^ k)) continue;
			cout << i << " " << ((n - 1) ^ i) << '\n';
		}
	}
}

int main() {
	cin >> t;

	while (t--) {
		solution();
	}
}
