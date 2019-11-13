#include "std_lib_facilities.h"

using namespace std;

struct Date{
  int y,m,d;
  Date(int y, int m, int d);
  void add_day(int n);

};

Date::Date(int yy, int mm, int dd):y{yy}, m{mm}, d{dd}
{
	if (m < 1 || m > 12) error("Nincs ilyen honap!");
	if (d < 1 || d > 31) error("Nincs ilyen nap a honapban!");
}

void Date::add_day(int n){
  d += n;
}

void f()
{
Date today(2008,3,30);

cout<<today.y<<"/"<<today.m<<"/"<<today.d<<endl;

Date tomorrow(2008,3,30);
tomorrow.y = today.y;
tomorrow.m = today.m;
tomorrow.d = today.d+1;
cout<<tomorrow.y<<"/"<<tomorrow.m<<"/"<<tomorrow.d<<endl;

}

int main(){
  try{
    f();
  }catch (exception& e) {
		cout<<e.what()<<'\n';
	}

	keep_window_open();
    return 0;
}
