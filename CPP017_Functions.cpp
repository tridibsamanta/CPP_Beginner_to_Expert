/**
 * Author:    Tridib Samanta
 * Created:   15.01.2020
 **/

#include<iostream>
using namespace std;

void welcome(); // Declaration of function
bool isNumber(string tmp);
//bool isNumber(string); Mentioning variable name during declaration not mandatory
void enterString();

//Inline Function
double add(double a,double b) {return a+b;}

void changeValueTO10(int x) { x=10; }
//main() is a function
int main() {

    welcome();

    char ch;
    cout<<"Do you want to end the program ? (Y/N)"<<endl;
    cin>>ch;
    if(ch=='Y'||ch=='y')
        return 0;

    cout<<add(4.5+2,4.0)<<endl;

    int a=5;
    //A copy of the variable a is sent as the function paramenter
    changeValueTO10(a);
    cout<<a<<endl; //The value of a will still be 5 as because the original value at address of a is not changed.


    enterString();
    enterString();
    enterString();

    return 0;
}

void welcome() {
    cout<<"Hello welcome to my function !"<<endl;
}

bool isNumber(string tmp) {
    if(tmp[0]=='0')
        return false; //When function returns a value its the end of execution of the function
    for(int i=0;i<tmp.length();i++) {
        if(!(tmp[i] >= 48 && tmp[i] <= 57))
            return false; //Once false is returned it wont execute the loop anymore
    }

    return true;
}

void enterString() {
    string tmp;
    cout<<"Enter the number : "<<endl;
    cin>>tmp;

    if(isNumber(tmp))
        cout<<"Number entered properly"<<endl;
    else
        cout<<"Number entered is incorrect"<<endl;
}
