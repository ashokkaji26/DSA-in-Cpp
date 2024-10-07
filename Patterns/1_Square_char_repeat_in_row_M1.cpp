#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>> n;

    for(int i = 0; i<n; i++){
        char ch = 'a' + i;
        for(int j = 0; j<n; j++){
            cout<< ch;
        }
        cout<<endl;
    }
    return 0;
}