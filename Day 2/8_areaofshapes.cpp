#include<iostream>
using namespace std;

double area_of_square(double &a, double &b);
double area_of_circle(double &r);
double area_of_rectangle(double &a, double &b);

int main(){
    double a, b, r;

    a = 10; b = 20;
    cout << "Area of Rectangle: " << area_of_rectangle(a, b) << endl;
    
    r = 10;
    cout << "Area of Circle: " << area_of_circle(r) << endl;

    a = 10;
    cout << "Area of Square: " << area_of_square(a, a) << endl;
}

double area_of_square(double &a, double &b){
    return a * b;
}

double area_of_circle(double &r){
    return 3.141592 * r * r;
}

double area_of_rectangle(double &a, double &b){
    return a * b;
}