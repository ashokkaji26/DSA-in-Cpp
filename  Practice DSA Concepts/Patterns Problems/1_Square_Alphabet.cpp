#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows: ";
    cin>> n;

    char ch = 'A';

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<< ch;
            ch++;
        }
        ch = 'A';
        cout<<endl;
    }
    return 0;
}