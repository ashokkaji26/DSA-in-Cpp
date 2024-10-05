#include <iostream>
using namespace std;

int main(){
    int n;
    int sum_3 = 0;
    cout<<"Enter n: ";
    cin>> n;

    for(int i = 1; i<=n; i++){
        if(i%3==0){
            sum_3 += i;
        }
    }
    cout<<sum_3 <<endl;

    return 0;
}