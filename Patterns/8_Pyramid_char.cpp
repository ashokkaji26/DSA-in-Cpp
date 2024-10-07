#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>> n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-(i+1); j++){
            cout<<" ";
        }
        for(int k=0; k<i+1; k++){
            char ch = 'A' + k;
            cout<< ch;
        }
        for(int l = i; l>0; l--){
            char ch = 'A' + (l-1);
            cout<< ch;
        }
        cout<<endl;
    }
    return 0;
}