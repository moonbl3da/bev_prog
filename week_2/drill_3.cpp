#include "std_lib_facilities.h"

using namespace std;

int main() {

//Drill 3 1.pont

string first_name;

cout<<"Enter the name of the person you want to write to: ";
cin>>first_name;
cout<<"Dear "<<first_name<<","<<endl;

//Drill 3 2.pont

cout<<"How are you? I am fine. I miss you."<<endl;

//Drill 3 3.pont

string friend_name;
cout<<"Add a friend name: ";
cin>>friend_name;
cout<<"Have you see "<<friend_name<<" lately?"<<endl;

//Drill 3 4.pont

char friend_sex = '0';

cout<<"Enter your friend sex(male = m/female = f): ";
cin>>friend_sex;

if (friend_sex == 'm' ){

  cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;

}else{

  cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;

}

//Drill 3 5.pont

int age=0;

cout<<"Please enter your age: ";
cin>>age;

if (age>=110 or age<= 0){

  simple_error("you're kidding!");

}else{

cout<<"I hear you just had a birthday and you are "<< age << " years old."<<endl;

}

//Drill 3 6.pont

if (age<=12){

  cout<<"Next year you will be "<<age+1<<"."<<endl;

}

if (age==17){

  cout<<"Next year you will be able to vote."<<endl;

}

if (age>=70){

  cout<<"I hope you are enjoying retirement."<<endl;

}

//Drill 3 7.pont

cout<<endl;
cout<<endl;
cout<<"Yours sincerely,"<<endl;
cout<<"Dominik."<<endl;

return 0;
}
