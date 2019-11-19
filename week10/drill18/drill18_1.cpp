#include <iostream>
#include <vector>

using namespace std;

const int gas = 10;
int ga[gas] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void ki(const int ai[], int n) {
	for (int i = 0; i < n; i++) cout << ai[i] << " ";
}


void f(int ai[],int n ) {
	int la[gas];
	for (int i = 0; i < gas; i++) 
		la[i] = ga[i];
	ki(la, gas);
	cout << endl;
	int* p = new int[n];
	for (int i = 0; i < n; i++) p[i] = ai[i];
	ki(p, n);
	cout << endl;
	delete[] p;
}

int main() {
	try {
		f(ga, gas);
		const int las = 10;
		int aa[las] = { 1 };
		for (int i = 1; i < las; ++i) 
			aa[i] = aa[i - 1] * (i + 1);
		f(aa, las);
	}
	catch (exception & e) {
		cerr << "exception: " << e.what() << endl;
	}
	catch (...) {
		cerr << "exception" << endl;
	}

	return 0;
}
