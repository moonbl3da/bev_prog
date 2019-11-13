#include "std_lib_facilities.h"

using namespace  std;

class Date{
  int y, m, d;

  public:

      Date(int y, int m, int d);
      void add_day(int n);
      int month() { return m; }
      int day() { return d; }
      int year() { return y; }
};

Date::Date(int yy, int mm, int dd) // constructor
            :y{yy}, m{mm}, d{dd}
{
  if(m<1 || m>12) error("Nincs ilyen honap!");
  if(d<1 || d>31) error("Nincs ilyen nap a honapban!");
}

void Date::add_day(int n) {
	d = d+n;
}

void f(){

        Date today( 1970,5,1);
        cout<<"Today:"<<today.year()<<"/"<<today.month()<<"/"<<today.day()<<endl;
        today.add_day(1);
        cout<<"Today:"<<today.year()<<"/"<<today.month()<<"/"<<today.day()<<endl;

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
