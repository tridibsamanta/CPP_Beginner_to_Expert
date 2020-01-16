/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include<iostream>
using namespace std;

/*
~ Reference Variables are the alias to another variable.
~ Must be initialized when created.
~ They cant change the connections/associations.
~ Must be of the same type as associated variables.
*/

int main() {

    string name="Peter";
    cout<<"Value of variable is : "<<name<<". Address of variable is : "<<&name<<endl;

    string &ref_1 = name; // Creating a reference variable
    cout<<"Value of variable is : "<<ref_1<<". Address of variable is : "<<&ref_1<<endl;

    ref_1 = "Sam";
    cout<<"Value of variable is : "<<name<<". Address of variable is : "<<&name<<endl;
    cout<<"Value of variable is : "<<ref_1<<". Address of variable is : "<<&ref_1<<endl;

    return 0;
}
