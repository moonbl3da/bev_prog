#include "std_lib_facilities.h"
#include <vector>

using namespace std;

int main () {

//Drill 4 4.pont
  double a=0,b=0,valtozo;
//
/*
//Drill 4 1.pont
  string small = " and the smaller value is: ";
  string large = "The larger value is: ";


  while(cin>>a>>b){

    cout<<"A ket valtozo: "<<a<<" "<<b<<endl;

  }*/

//Drill 4 2.pont
/*
while(cin>>a>>b){
  if (a>b){
    cout<<large<<a<<small<<b<<endl;
  }else{
    cout<<large<<b<<small<<a<<endl;
  }


}
*/
//Drill 4 3.pont és 5.pont
/*while(cin>>a>>b){  igaz
if (a==b){
  cout<<"the numbers are equal"<<endl;
  valtozo=0.0;
}else if (a>b){
    cout<<large<<a<<small<<b<<endl;
    valtozo=a-b;
  }else{
    cout<<large<<b<<small<<a<<endl;
    valtozo=b-a;
  }
  if(valtozo != 0.0 && valtozo < 0.000001){
    cout<<"the numbers are almost equal"<<endl;
  }
}*/

//Drill 4 6.pont
/*
bool logikai_tarolo = true;
double small,large;

while(cin>>a){
  cout<<a<<endl;
  if(logikai_tarolo){
    small = a;
    large = a;
    logikai_tarolo= false;
  }else if (a<small) {
    cout<<"The smallest so far "<<endl;
    small = a;
  }else if (a>large){
    cout<<"The large so far "<<endl;
    large = a;
  }
}*/
//Drill 4 7.pont 8.pont 9.pont 10.pont 11.pont

const double m_cm = 100,in_cm = 2.54,ft_in = 12;
bool logikai_tarolo = true;
double small,large,vegertek=0.0;
string megyseg;
vector<double> ertekek;
double T;

while(cin>>a>>megyseg){
  cout<<a<<megyseg<<endl;
  if (megyseg == "m"){
    a = a;
  }else if (megyseg == "cm"){
    a = a/m_cm;
  }else if (megyseg == "in"){
    a = in_cm*a/m_cm;
  }else if (megyseg == "ft"){
    a = ft_in*in_cm*a/m_cm;
  }else {
    cout<<"Illegal unit!"<<endl;
  }
  ertekek.push_back(a);
  vegertek = vegertek + a;
  if(logikai_tarolo){
    small = a;
    large = a;
    logikai_tarolo= false;
  }else if (a<small) {
    cout<<"The smallest so far "<<endl;
    small = a;
  }else if (a>large){
    cout<<"The large so far "<<endl;
    large = a;
  }
}
cout<<endl;
cout<<"Largest: "<<large<<endl;
cout<<"Smallest: "<<small<<endl;
cout<<"Sum of values: "<<vegertek<<endl;

  for(int i=0;i<ertekek.size();i++){
    for (int j=0;j<ertekek.size()-1;j++){
      if (ertekek[j]>ertekek[j+1]){
        T = ertekek[j];
        ertekek[j] = ertekek[j+1];
        ertekek[j+1] = T;
      }
    }
  }

cout<<"Ertekek: ";
 for (int i = 0;i<ertekek.size();i++){
   cout<<ertekek[i]<<" ";

 }
cout<<endl;
  return 0;
}
