#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int val;
	val = abs(n);
	int digit;
	digit = (val/10) % 10;
	cout << digit << endl;
}