#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter n: ";
    cin>> n;

    for(int i = 0; i<n; i++){
        char ch = 'A' + i;
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int k= 0; k<n-i; k++){
            cout<< ch;
        }
        cout<<endl;
    }
    return 0;
}