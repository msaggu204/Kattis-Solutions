#include <iostream>
using namespace std;


int main() {
	int x, y;
	cin >> x >> y;
	if ((x > 0) && (y > 0)) {
		cout << "1" << endl;
	} 
	if ((x < 0) && (y > 0)) {
			cout << "2" << endl;
	} 
	if ((x < 0) && (y < 0)) {
		cout << "3" << endl;
	}
	if ((x > 0) && (y < 0)) {
			cout << "4" << endl;
	}
}




/*
Using this method will result in 'case value is
not a constant val' error b/c the cases are not
stated values. Must use 4 if statements instead.
"""
int main() {
	int x, y;
	cin >> x >> y;
	int quadrant;
	switch(quadrant) {
		case ((x > 0) && (y > 0)):
			cout << "1" << endl;
			break;
		case ((x < 0) && (y > 0)):
			cout << "2" << endl;
			break;
		case ((x < 0) && (y < 0)):
			cout << "3" << endl;
			break;
		case ((x > 0) && (y < 0)):
			cout << "4" << endl;
			break;
	}
}
*/