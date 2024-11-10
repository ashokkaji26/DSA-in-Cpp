#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,-20,-1,29,40};
    int size = sizeof(arr)/sizeof(int);
    
    int minIndex = 0;

    for(int i = 0; i<size; i++){
        if(arr[i]< arr[minIndex]){
            minIndex = i;
        }
    }
    cout<<"Index of smallest number is: "<<minIndex<<endl;
    return 0;
}