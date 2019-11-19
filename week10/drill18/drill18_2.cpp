#include <iostream>
#include <vector>

using namespace std;

vector<int> gv;

void kiir(const vector<int>& v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

void feltolt_gv(vector<int>& v) {
	for (int i = 0; i < 10; i++) {
		v.push_back(pow(2, i));
	}
}

void f(const vector<int>& v) {
	vector<int> lv(v.size());
	lv = gv;
	kiir(lv);
	cout << endl;
	vector<int> lv2(v);
	kiir(lv2);
	cout << endl;
}


int main() {
	try {
		feltolt_gv(gv);
		f(gv);
		vector<int> vv;
		vv.push_back(1);
		for (int i = 1; i < 10; i++)
			vv.push_back((i + 1) * vv[i - 1]);
		f(vv);
	}
	catch (exception & e) {
		cerr << "exception: " << e.what() << endl;
	}
	catch (...) {
		cerr << "exception\n";
	}

	return 0;
}
