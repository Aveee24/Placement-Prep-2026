#include <iostream>
#include <numbers>
#include<cmath>
using namespace std;

int main(){
    cout<<"Enter the length and breadth of rectangle: "<<endl;
    int length, breadth;
    cin>>length;
    cin>>breadth;
    cout<<"The area of a rectangle is: "<<length*breadth<<endl;
    cout<<"The perimeter of a rectangle is: "<<2*(length+breadth)<<endl;
    cout<<"Enter radius of circle: ";
    int radius;
    cin>>radius;
    cout<<"The area of a circle is: "<< numbers::pi*pow(radius,2)<<endl;
    cout<<"Enter the temp in Celsius: ";
    double celsius;
    cin>>celsius;
    cout<<"The temperature in Fahrenheit is: "<< (celsius*9/5)+32<<endl;
    int a,b,temp;
    cout<<"Enter values of a and b: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    temp = a;
    a=b;
    b = temp;
    cout<<"New a: "<<a<<endl;
    cout<<"New b: "<<b<<endl;
}