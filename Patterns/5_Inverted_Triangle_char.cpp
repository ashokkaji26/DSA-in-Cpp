#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>> n;

    char ch = 'A';

    for(int i = 0; i<n; i++){  //outer loops=> no. of rows.

        for(int j = 0; j<i; j++){ // spaces
            cout<< " ";
        }

        for(int k = 0; k<n-i; k++){  //alphabets
            cout<< ch;
        }
        ch++;
        cout<<endl;
        
    }
    return 0;
}