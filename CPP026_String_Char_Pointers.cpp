/**
 * Author:    Tridib Samanta
 * Created:   17.01.2020
 **/

#include<iostream>
using namespace std;

int main() {

    string text = "Hello"; // H e l l o \0

    char ch = text[0];

    char characters[]="Hello World";

    cout<<characters<<endl;

    cout<<characters[0]<<endl;
    cout<<*(characters)<<endl;
    cout<<characters[1]<<endl;
    cout<<*(characters+1)<<endl;

    cout<<endl<<endl;

    char *p = characters;

    cout<<p[0]<<endl;
    cout<<*p<<endl;

    cout<<p[1]<<endl;
    cout<<*(p+1)<<endl;

    cout<<endl<<endl;

    string text1="Hey";

    const char * text2 = text1.c_str();
    cout<<text2<<endl;

    char array[]="Sample Text";
    string test = array;
    cout<<test<<endl;

    const char * a = "Test";
    cout<<a<<endl;

    char * const dynamic_array = new char[50];
    dynamic_array[0]='k';
    dynamic_array[1]='\0';
    cout<<dynamic_array<<endl;
    delete [] dynamic_array;

    cout<<endl<<endl;

    string array_of_strings[5]="qwerty";

    array_of_strings[0]="abc";
    array_of_strings[1]="def";

    cout<<array_of_strings[0]<<endl;
    cout<<array_of_strings[1]<<endl;
    cout<<array_of_strings[2]<<endl;
    //...

    return 0;
}
