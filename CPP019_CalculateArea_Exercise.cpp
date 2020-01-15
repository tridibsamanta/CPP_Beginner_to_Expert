/**
 * Author:    Tridib Samanta
 * Created:   15.01.2020
 **/

#include<iostream>
#define PI 3.14
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double,double);
double areaTriangle(double,double);


int main() {

    int choice;
    char cont;

    do {
        //system("cls");
        initMenu();
        cin>>choice;

        menuDecision(choice);

        cout<<"Do you want to continue ? (Y/N)"<<endl;
        cin>>cont;
    } while(cont=='Y'||cont=='y');

    return 0;
}

void initMenu() {
    cout<<"Select from the options :"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Square"<<endl;
    cout<<"3.Rectangle"<<endl;
    cout<<"4.Triangle"<<endl;
}

void menuDecision(int ch) {
    double r,a,b,h;
    switch(ch) {
    case 1:
        cout<<"Enter the radius : "<<endl;
        cin>>r;
        areaCircle(r);
        break;
    case 2:
        cout<<"Enter a side of the square : "<<endl;
        cin>>a;
        areaSquare(a);
        break;
    case 3:
        cout<<"Enter the width and height of the rectangle : "<<endl;
        cin>>a>>b;
        areaRectangle(a,b);
        break;
    case 4:
        cout<<"Enter the base and height of the triangle : "<<endl;
        cin>>a>>h;
        areaTriangle(a,h);
        break;
    default:
        cout<<"Wrong choice !"<<endl;
    }
}

double areaCircle(double r) {
    double result = PI *r *r;
    cout<<"The area of the circle is : "<<result<<endl;
    return result;
}

double areaSquare(double a) {
    double result = a* a;
    cout<<"The area of the Square is : "<<result<<endl;
    return result;
}

double areaRectangle(double a,double b) {
    double result = a* b;
    cout<<"The area of the Rectangle is : "<<result<<endl;
    return result;
}

double areaTriangle(double a,double h) {
    double result = (1/2.0)*a*h;
    cout<<"The area of the Triangle is : "<<result<<endl;
    return result;
}

