/**
 * Author:    Tridib Samanta
 * Created:   14.01.2020
 **/

#include<iostream>
using namespace std;

main() {
    for(int i=1;i<=10;i++) {
        if(i==3)
            continue; //Everything after continue WONT BE executed.
        //But the loop wont stop, it skips the current iteration instructions.
        if(i==5)
            break;//Everything after break WONT BE executed and the control comes out from the loop.
        //The particular loop stops execution once break statement is encountered.
        cout<<"Multiplication table of "<<i<<endl;
        for(int j=1;j<=10;j++) {
                if(j==5)
                    break; //Wont print after first 4 rows for each table
            cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
        }
        cout<<endl;
    }
}
