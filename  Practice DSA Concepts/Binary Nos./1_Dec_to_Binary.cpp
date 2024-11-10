//Very important.

#include<iostream>
using namespace std;

int decToBin(int num){
    int binNo = 0;
    int power = 1;
    int remainder;
    while(num>0){
        remainder = num % 2;
        num /= 2;
        binNo += remainder * power;
        power *= 10;
    }
    return binNo;
}

int main(){
    int n;
    cout<<"Enter the value of n, to convert all the nos. from 0 to n in binary form: ";
    cin>>n;

    for(int i = 0; i<=n; i++){
        cout<< i <<" = " << decToBin(i)<<endl;
    }

    return 0;
}