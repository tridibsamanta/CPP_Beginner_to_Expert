/**
 * Author:    Tridib Samanta
 * Created:   17.11.2019
 **/

#include <iostream>
using namespace std;

main()
{
    int biArray[3][4]={0}; //Initialize all array elements to zero

    //Initialize individual array elements to respective values
    biArray[0][0]=11;
    biArray[0][1]=12;
    biArray[0][2]=13;
    biArray[0][3]=14;

    biArray[1][0]=21;
    biArray[1][1]=22;
    biArray[1][2]=23;
    biArray[1][3]=24;

    biArray[2][0]=31;
    biArray[2][1]=32;
    biArray[2][2]=33;
    biArray[2][3]=34;

    //Print all array elements
    cout<<biArray[0][0]<<","<<biArray[0][1]<<","<<biArray[0][2]<<","<<biArray[0][3]<<endl;
    cout<<biArray[1][0]<<","<<biArray[1][1]<<","<<biArray[1][2]<<","<<biArray[1][3]<<endl;
    cout<<biArray[2][0]<<","<<biArray[2][1]<<","<<biArray[2][2]<<","<<biArray[2][3]<<endl;
}
