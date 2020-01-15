/**
 * Author:    Tridib Samanta
 * Created:   15.01.2020
 **/

#include<iostream>
using namespace std;

//Variables created outside the curly brackets are called Global Variables.

int globalVariable;

main() {

    //Variables declared within a block are called Local Variables.
    int localVariable;

    cout<<"Value of Global Variable is : "<<globalVariable<<endl; //Default value is 0
    cout<<"Value of Local Variable is : "<<localVariable<<endl; //Default value is garbage value

    /*
    int a=10; //Local Variable

    if(a==10)
        int result = a*10;

    cout<<result; // Error as result is local to the if block
    */

}
