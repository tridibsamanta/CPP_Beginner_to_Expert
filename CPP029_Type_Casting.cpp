/**
 * Author:    Tridib Samanta
 * Created:   27.01.2020
 **/

#include<iostream>
using namespace std;

int main() {

    double val=5.5;

    cout<<val<<endl;
    cout<<(int)val<<endl; //Explicit Casting

    int a=5,b=7;
    cout<<a/b<<endl;
    cout<<(double)a/b<<endl; //Explicit Casting

    int x = 444;
    short y=x; //Implicit Casting
    cout<<y<<endl;

    cout<< static_cast<int>(val)<<endl; //C++

    char ch='t';
    cout<<(int)ch<<endl; //Check ASCII value of a character
    cout<<static_cast<int>(ch)<<endl;

    return 0;
}
