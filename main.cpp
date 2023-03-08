#include <iostream>
#include <cmath>
using namespace std;
int main() {
//Question-1
string name;
cout<<"What is your name?"<<endl;
cin>>name;
cout<<"Hello "<<name<<endl;
int ID;
cout<<"What is your student ID?"<<endl;
cin>>ID;
cout<<"Your student ID is "<<ID<<endl;
//Question-2
int var1;
int var2;
cout<<"Enter first value: "<<endl;
cin>>var1;
cout<<"Enter second value: "<<endl;
cin>>var2;
int sum=var1+var2;
int diff=var1-var2;
int prod=var1*var2;
cout<<"var1 + var2 = "<<sum<<endl;
cout<<"var1 - var2 = "<<diff<<endl;
cout<<"var1 * var2 = "<<prod<<endl;
//Question-3
string studentName;
int lab;
int midterm;
int final;
double lastScore;
cout<<"Enter student's name: ";
cin>>studentName;
cout<<"\nLab: ";
cin>>lab;
cout<<"\nMidterm: ";
cin>>midterm;
cout<<"\nFinal: ";
cin>>final;
lastScore=lab*0.25+midterm*0.35+final*0.4;
cout<<"\nLast Score: "<<lastScore<<endl;
//Question-4
cout<<"*"<<endl;
cout<<"**"<<endl;
cout<<"***"<<endl;
cout<<"**"<<endl;
cout<<"*"<<endl;
}
