#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>> n; 

    char ch = 'a';
    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<i+1; j++){
            cout<< ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}