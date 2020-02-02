/**
 * Author:    Tridib Samanta
 * Created:   02.02.2020
 **/

#include<iostream>
using namespace std;

class MyDetails {

    private:
        short age;
        int *p;
    public:

        MyDetails() //Constructor
        {
            static int i=0;
            cout<<"This constructor has been just invoked "<<++i<<" time"<<endl;
            age=50;

            p=new int[10];
        }

        ~MyDetails() //Destructor
        {
            static int j=0;
            cout<<"This Destructor has been just invoked "<<++j<<" time"<<endl;

            delete [] p;
        }

        void setAge(int value) {
                if(value<0)
                    age=0;
                else
                    age=value;
        }
        short getAge() {
            return age;
        }
};

int main() {

    MyDetails p1;
    MyDetails p2;

    p1.setAge(-55);
    p2.setAge(20);

    cout<<p1.getAge()<<endl;
    cout<<p2.getAge()<<endl;

    return 0;
}

