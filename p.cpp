#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>> n;

    for(int i = 0; i<n; i++){

        for(int j = 0; j<n-(i+1); j++){  //spaces
            cout<<" ";
        }

        int num1 = 1;
        for(int k = 0; k<i+1; k++){   //numbers1
            cout<<num1;
            num1++;
        }
        int num2 = i;
        for(int l = 0; l<i; l++){   //numbers2
            cout<< num2;
            num2--;
        }

        cout<<endl;

    }
    return 0;
}