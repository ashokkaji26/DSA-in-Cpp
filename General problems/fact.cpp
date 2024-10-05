#include<iostream>
using namespace std;

int main(){
    int N;
    int fact = 1;
    cout<< "Enter N: ";
    cin>> N;

    int i = 1;
    while(i<=N){
        fact *= i;
        i++;
    }
    cout<<"The factorial is: " <<fact <<endl;
    return 0;
}