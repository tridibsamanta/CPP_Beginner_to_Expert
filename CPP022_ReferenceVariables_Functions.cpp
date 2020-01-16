/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include<iostream>
using namespace std;

void swap(int &, int &);

int main() {

    int a=10,b=20;
    swap(a,b);

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}

void swap(int &a, int &b) {
    int t;
    t=a;
    a=b;
    b=t;

}
