/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include<iostream>
using namespace std;

int main() {

    int var = 5;
    cout<<&var<<endl; //Prints the address
    cout<<*&var<<endl; //Prints the value

    int *p; //*p - This indicates that p is a pointer type variable that points to address of another variable
    p=&var;

    cout<<p<<endl; //Prints the address of var
    cout<<*p<<endl; //Prints the value stored at the indicated address in the memory

    int a=20;
    cout<<"a : "<<a<<endl;
    int *p1=&a;
    *p1=60;
    cout<<"a : "<<a<<endl;
    cout<<"*p1 : "<<*p1<<endl;

    int * const p_const = &a; //Cannot change the ADDRESS afterwards
    const int *p2 = &a; //Cannot change the VALUE
    const int * const p3 = &a; //Cannot change the VALUE as well as ADDRESS

    int my_var=10;
    int *my_p=&my_var;

    cout<<endl<<endl;
    cout<<"my_var : "<<my_var<<endl; //Integer value
    cout<<"my_p : "<<my_p<<endl; //Address
    cout<<"*my_p : "<<*my_p<<endl; //Integer value from pointed variable (my_var)
    cout<<"&my_p : "<<&my_p<<endl; //Address of pointer itself

    int **pp=&my_p; //Pointer pointing to address of another pointer
    cout<<"pp : "<<pp<<endl;
    cout<<"&pp : "<<&pp<<endl;
    cout<<"*pp : "<<*pp<<endl;
    cout<<"**pp : "<<**pp<<endl;

    return 0;
}
