/**
 * Author:    Tridib Samanta
 * Created:   17.01.2020
 **/

#include<iostream>
using namespace std;

void multiplyBy(int *, int);
void multiplyArrayBy(int *, int, int);
int main() {

    int a = 10;

    multiplyBy(&a,5);

    cout<<a<<endl;
    cout<<endl;

    int array[10];
    //cout<<sizeof(array)/sizeof(array[0])<<endl;

    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++) {
        array[i]=i;
        //cout<<"array ["<<i<<"] = "<<array[i]<<endl;
    }

    multiplyArrayBy(array,5,sizeof(array)/sizeof(array[0])); // array = &array[0]

    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++) {
        cout<<"array ["<<i<<"] = "<<array[i]<<endl;
    }

    return 0;
}

void multiplyBy(int *var, int amount) {
    *var = *var * amount;
}

void multiplyArrayBy(int *array, int amount, int sizeOfArray) {
    while(sizeOfArray--)
        array[sizeOfArray] *= amount;

    /*
    for(int i=0;i<sizeOfArray;i++) {
        array[i] *= amount;
    } */
}
