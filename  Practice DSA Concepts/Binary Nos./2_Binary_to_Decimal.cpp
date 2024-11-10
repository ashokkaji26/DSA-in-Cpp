#include<iostream>
using namespace std;

// very important concept

int binToDec(int binNo){

    int decNo = 0;
    int power = 1;
    int remainder;

    while(binNo>0){
        remainder = binNo % 10;
        binNo /= 10;
        decNo += remainder * power;
        power*= 2;
    }
    return decNo;
}

int main(){

    int binNo;
    cout<<"Enter a binary no. to convert it into decimal no: ";
    cin>>binNo;
    

    cout<<binNo <<" = " << binToDec(binNo) <<endl;

    return 0;
}