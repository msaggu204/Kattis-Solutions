#include <iostream>
using namespace std;

int main() {
	unsigned long i = 0;
	while(true) {
		if(i == 0xFAD9CEA62ul){
			break;
		}
		cout << i << " is equal to 0xFAD9CEA62" << endl;
	}
}