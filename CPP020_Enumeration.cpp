/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include<iostream>
using namespace std;

enum dayOfWeek {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

string getDay(dayOfWeek);

int main() {

    //dayOfWeek d = Wednesday;
    //cout<<d<<endl;
    //cout<<getDay(Tuesday)<<endl;

    cout<<"Enter a day of the week ?"<<endl;
    int i;
    cin>>i;
    cout<<getDay(dayOfWeek(i))<<endl;

    return 0;
}

string getDay(dayOfWeek d) {
    switch(d) {
    case Monday:
        return "Hey ! You have selected Monday";
    case Tuesday:
        return "Hey ! You have selected Tuesday";
    case Wednesday:
        return "Hey ! You have selected Wednesday";
    case Thursday:
        return "Hey ! You have selected Thursday";
    case Friday:
        return "Hey ! You have selected Friday";
    case Saturday:
        return "Hey ! You have selected Saturday";
    case Sunday:
        return "Hey ! You have selected Sunday";
    default:
        return "Hey ! Wrong input !";
    }
}
