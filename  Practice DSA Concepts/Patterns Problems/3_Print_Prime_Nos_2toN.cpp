#include<iostream>
using namespace std;
                                                        // *** Important Concepts ***
//This function will check a no is prime or not ??
int primeOrNot(int m){
    int isPrime = true;

    for(int i = 2; i * i <=m; i++){
        if(m%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

//This function will print all prime nos. from 2 to N.
void printPrimes(int n){
    for(int j = 2; j<=n; j++){
        int check =primeOrNot(j);
        if(check == 1){
            cout<< j <<" ";
        }
    }
    return;
}


int main(){
    int n;
    cout<<"Enter a no. to print all primes between 2 & ny: ";
    cin>>n;
    printPrimes(n);

    return 0;
}