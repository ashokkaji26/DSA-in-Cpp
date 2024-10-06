#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Etner n: ";
    cin>> n;

    for(int i= 0; i<n; i++){  //outer loop => no. of rows.

        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //numbers
        for(int k=1; k<=n-i; k++){
            cout<< i+1;
        }

        cout<<endl;
    }
    return 0;
}