#include <iostream>
using namespace std;

int main() {
	int x, y, z, i;
	x = 0;
	y = 1;
	i = 1;
	// Do-While loop
	/*
	do {
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
		i ++;
	} while (i <=20);
	*/

	/*
	while (i <=20) {
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
		i ++;
	}
	*/

	/*
	for (int i = 1; i <= 20; i++) {
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
	}
	*/

	/*
	for (int i:{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}) {
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
	}
	*/

	while (true) {
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
		i++;
		if (i > 20) {
			break;
		}
	}
}