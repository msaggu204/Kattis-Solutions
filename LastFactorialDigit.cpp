#include <iostream>
using namespace std;

int fact(int n) {
	if (n < 2) {
		return 1;
	}
	return n % 10 * fact(n - 1) % 10;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int x;
		cin >> x;
		cout << (x >= 5 ? 0 : fact(x)) << '\n';
	}
	return 0;
}

/*
int main() {
	int T, y, N, x, factorial;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> N;

		factorial = N;
		y = factorial;

		while (y > 1) {
			y--;
			factorial = factorial * y;
		}
		if (factorial < 10) {
			cout << factorial << endl;
		} else {
			cout << "0" << endl;
		}
	}
}
*/