/**
 * Author:    Tridib Samanta
 * Created:   15.01.2020
 **/

#include<iostream>
using namespace std;

int power(int,int);
double power(double,int);
//While overloading functions the function name will be the same.
//Function return type and function parameters will be different.

int main() {

    cout<<power(2.8,3)<<endl;
    cout<<power(2,3)<<endl;
    return 0;
}

int power(int b,int e) {
    int tmp=b;
    while(e>1) {
        b = b*tmp;
        e--;
    }
    return b;
}

double power(double b,int e) {
    int tmp=b;
    while(e>1) {
        b = b*tmp;
        e--;
    }
    return b;
}
