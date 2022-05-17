#include <iostream>
using namespace std;

int main () {
//declaring variables
double diameter,area,radius;
double pi = 3.142;
//prompt the user to enter the diameter of a circle

cout<<"enter the diameter of a circle"<<endl;
cin >>diameter;

radius = (diameter / 2 ) ;
area = pi * radius *radius;

cout<<" area of a circle is  with diameter " << diameter<<" is equal to " << area;




return 0;


}
