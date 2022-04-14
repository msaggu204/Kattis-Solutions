#include <iostream>
using namespace std;

int Harshad(int n) {
	int x = n, sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	return x % sum == 0;
}

int main() {
	int n;
	cin >> n;

	while (Harshad(n) != 0) {
		if (Harshad(n) == 0) {
			cout << n << endl;
			break;
		}
		n++;
	}
	return 0;
}
/*
int Harshad(int n) {
	int sum = 0;
	for (int temp = 0; temp > 0; temp /= 10) {
		sum += temp % 10;
	}
	if (n % sum == 0) {
		return i;
	} else {
		while (i % sum != 0) {
			i++;
			Harshad(i);
		}
		return i;
	}
}

int main() {
	int n;
	cin >> n;

	Harshad(n);
}
*/