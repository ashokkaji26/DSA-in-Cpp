#include <iostream>
using namespace std;

int main(){

    int n;
    bool isPrime = true;
    cout<<"Enter n: ";
    cin>> n;

    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<< "Prime number.\n";
    } else{
        cout<<"Non-Prime number.\n";
    }
    return 0;
}