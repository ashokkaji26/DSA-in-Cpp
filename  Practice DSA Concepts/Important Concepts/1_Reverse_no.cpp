#include<iostream>
using namespace std;


// good concempt
int main(){
    int n;
    cout<<"Enter a no. to reverse it: ";
    cin>>n;

    int remainder;
    int reverseNo = 0;
    
    while(n>0){
        remainder = n % 10;
        n /= 10;
        reverseNo = reverseNo * 10 + remainder;
 
    }
    cout<<"Reverse = " <<reverseNo<<endl;
    return 0;
}