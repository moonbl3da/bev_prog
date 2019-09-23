#include "std_lib_facilities.h"

using namespace std;

int main() {
  int a=0,b=0;
  cout<<"Kerek ket valtozot: "<<endl;
  cin>>a>>b;

  cout<<"1.valtozo = "<<a<<endl;
  cout<<"2.valtozo = "<<b<<endl;

  //megcsereles

  a=a*b;
  b=a/b;
  a=a/b;

  cout<<"Csere utan: "<<endl;

  cout<<"1.valtozo = "<<a<<endl;
  cout<<"2.valtozo = "<<b<<endl;

  return 0;
}
