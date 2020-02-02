/**
 * Author:    Tridib Samanta
 * Created:   02.02.2020
 **/

#include<iostream>
using namespace std;

struct personalData {
    string name;
    string address;
    string contactNo;
    short age;
};

void modify(personalData *);

int main() {

    personalData person[5];

    person[0].name = "Tridib Samanta";
    person[0].address = "Kolkata";
    person[0].contactNo = "+91 9000000000";
    person[0].age = 21;

    person[1].name = "Nikola Tesla";

    cout<<person[0].name<<endl;
    cout<<person[0].address<<endl;
    cout<<person[0].contactNo<<endl;
    cout<<person[0].age<<endl;

    cout<<endl;

    //Ways of fetching the values using pointer

    cout<<(*person).name<<endl;
    cout<<(*(person+1)).name<<endl;
    cout<<(*&person[0]).name<<endl;
    cout<<(person+1)->name<<endl;

    personalData *p = person;
    cout<<p->name<<endl;

    cout<<endl;

    modify(p);
    cout<<(p+1)->name<<endl;

    return 0;
}

void modify(personalData *person) {
    (person+1)->name="Peter";
}
