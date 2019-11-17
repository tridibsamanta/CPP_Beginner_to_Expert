/**
 * Author:    Tridib Samanta
 * Created:   17.11.2019
 **/

#include <iostream>
using namespace std;

main()
{
    double var1, var2;

    beginning:

    cout << "Enter first number: " << endl;
    cin >> var1;

    cout << "Enter second number: " << endl;
    cin >> var2;

    cout << "What do you want to do with that numbers?" << endl;
    cout << "+ - add" << endl;
    cout << "- - substract" << endl;
    cout << "* - multiply" << endl;
    cout << "/ - divide" << endl;

    char decision;

    cin >> decision;



    switch(decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
            break;
        case '/':
            if (var2) //var2 != 0
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "You can't divide by 0" << endl;
            break;
        default:
            cout << "You typed wrong character";

    }

    char decision2;

    cout << "Do you want to continue that program? (Y/N)" << endl;
    cin >> decision2;

    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;
}
