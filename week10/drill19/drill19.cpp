#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T> struct S
{
	S() :val(T()) { }   
	S(T d) :val(d) { }  
	T& get();       //6
	const T& get() const;  //11
	void set(const T& d);   //9
	T& operator=(const T& d);   //10

private:
	T val;
};


//6.
template<typename T> T& S<T>::get()
{
	return val;
}

//9
template<typename T> void S<T>::set(const T& d) {

	val = d;
}

//10
template<typename T> T& S<T>::operator=(const T& d)
{
	val = d;
	return val;
}
//11
template<typename T> const T& S<T>::get()const
{
	return val;
}

template<typename T> istream& operator>>(istream& is, S<T>& ss) {

	T v2;
	cin >> v2;
	if (!is) return(is);
	ss = v2;
	return is;

}


template<typename T> void read_val(T& v2)
{
	cin >> v2;
}


int main()
{
	try {
		//3.
		S<int> szam(69);
		S<char> karakter('D');
		S<double> tortsz(9.86);
		S<string> szo("kiskutya");
		vector<int> v;
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		S<vector <int> > s_v(v);

		//4.
		/*cout<<"int: "<<szam.val<<endl;
		cout<<"char: "<<karakter.val<<endl;
		cout<<"double: "<<tortsz.val<<endl;
		cout<<"string: "<<szo.val<<endl;
		for(int i=0;i<s_v.val.size();i++)
		{
			cout<<"vector: "<<s_v.val[i]<<" ";
		} cout<< endl;
	*/
	//8

		cout << "int: " << szam.get() << endl;
		cout << "char: " << karakter.get() << endl;
		cout << "double: " << tortsz.get() << endl;
		cout << "string: " << szo.get() << endl;

		//12
		cout << "int: " << endl;
		read_val(szam);
		cout << "char: " << endl;
		read_val(karakter);
		cout << "double: " << endl;
		read_val(tortsz);
		cout << "string: " << endl;
		read_val(szo);

		cout << "int: " << szam.get() << endl;
		cout << "char: " << karakter.get() << endl;
		cout << "double: " << tortsz.get() << endl;
		cout << "string: " << szo.get() << endl;
	}
	catch (exception & e) {
		cerr << "exception: " << e.what() << endl;
	}
	catch (...) {
		cerr << "exception" << endl;
	}

	return 0;
}
