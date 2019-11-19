#include <iostream>
#include <vector>

using namespace std;

//4.
void print_array(ostream& os, int* a, int n) {
	for (int i = 0; i < n; i++)
		os << a[i] << endl;
}

//13.
void print_vector(ostream& os, vector<int> v) {
	for (int i = 0; i < v.size(); i++)
		os << v[i] << endl;
}


int main() {
	try {
		//1.
		int i1 = 7;
		int* p1 = &i1;

		//2.
		cout << "p1: " << p1 << endl;
		cout << "*p1: " << *p1 << endl;

		//3.
		int* p2 = new int[7];
		for (int i = 0; i < 7; i++)
			p2[i] = pow(2, i);

		//4.
		cout << "p2" << p2 << endl;
		cout << "print_array(cout,p2,7):" << endl;
		print_array(cout, p2, 7);

		//5.
		int* p3 = p2;

		//6.
		p2 = p1;

		//7.
		p2 = p3;

		//8.
		cout << "p1: " << p1 << endl;
		cout << "*p1: " << *p1 << endl;
		cout << "p2: " << p2 << endl;
		cout << "*p2: " << *p2 << endl;

		//9.
		delete[] p2;
		p3 = 0;

		//10.
		p1 = new int[10];
		for (int i = 0; i < 10; i++)
			p1[i] = pow(2, i);

		//11.
		p2 = new int[10];

		//12.
		for (int i = 0; i < 10; ++i)
			p2[i] = p1[i];
		print_array(cout, p2, 10);

		//13.
		vector<int> v1;
		for (int i = 0; i < 10; i++)
			v1.push_back(pow(2, i));
		vector<int> v2;
		for (int i = 0; i < v1.size(); ++i)
			v2.push_back(v1[i]);
		print_vector(cout, v2);
	}
	catch (exception & e) {
		cerr << "exception: " << e.what() << endl;
	}
	catch (...) {
		cerr << "exception\n";
	}
	return 0;
}
