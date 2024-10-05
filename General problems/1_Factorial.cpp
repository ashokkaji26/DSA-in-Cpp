#include <iostream>
using namespace std;

int main(){
    // print factorial of a number N;
    int N;
    int factorial = 1;
    cout<<"Enter N: ";
    cin>> N;

    for(int i = 1; i<=N; i++ ){
        factorial *= i;
    }
    cout<< "Factorial is: " <<factorial <<endl;
    return 0;
}