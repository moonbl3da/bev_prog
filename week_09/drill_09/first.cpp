#include "std_lib_facilities.h"

using namespace std;

struct Date{
    int y;
    int m;
    int d;
};

void init_Day(Date& dd,int y,int m,int d){
  if (m<1 || m>12) error("Nincs ilyen honap!");
  if (d<1 || d>31) error("Nincs ilyen nap a honapban!");

  dd.m = m;
	dd.d = d;
	dd.y = y;
}

void add_Day(Date& dd, int n){
  dd.d += n;
}

void f(){

  Date today;
  init_Day(today, 2005,12,24);
  add_Day(today,1);

  cout<<today.d<<"/"<<today.m<<"/"<<today.y<<endl;

}
int main(){

  f();


  keep_window_open();

  return 0;
}
