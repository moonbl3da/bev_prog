#include <iostream>
#include <vector>

using namespace std;


//4.
void print_array10(ostream& os, int* a) {
	for (int i = 0; i < 10; ++i)
		os << a[i] << endl;
}

//7.
void print_array(ostream& os, int* a, int n) {
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;
}

//10.
void print_vector(ostream& os, vector<int> v) {
	for (int i = 0; i < v.size(); i++)
		os << v[i] << endl;
}


int main() {
	try {
		//1.
		int* tomb1 = new int[10];

		//2.
		for (int i = 0; i < 10; i++)
			cout << tomb1[i] << endl;
		//3.
		delete[] tomb1;

		//5.
		int* tomb2 = new int[10];
		for (int j = 0; j < 10; j++)
			tomb2[j] = 100 + j;
			print_array10(cout, tomb2);
			delete[]tomb2;

		//6.
		int* tomb3 = new int[11];
		for (int k = 0; k < 11; k++)
			tomb3[k] = 100 + k;
		print_array10(cout, tomb3);
		cout << tomb3[10] << endl;
		delete[] tomb3;


		//8.
		int* tomb4 = new int[20];
		for (int l = 0; l < 20; l++)
			tomb4[l] = 100 + l;
		print_array(cout, tomb4, 20);
		delete[] tomb4;


		//10.
		vector<int> v;
		for (int i = 0; i < 10; ++i)
			v.push_back(100 + i);
		print_vector(cout, v);

		cout << endl;
		vector<int> v2;
		for (int i = 0; i < 11; ++i)
			v2.push_back(100 + i);
		print_vector(cout, v2);

		cout << endl;
		vector<int> v3;
		for (int i = 0; i < 20; ++i)
			v3.push_back(100 + i);
		print_vector(cout, v3);

	}
		catch (exception & e) {
	cerr << "exception: " << e.what() << endl;
		}
		catch (...) {
	cerr << "exception\n";
		}

	return 0;
}
