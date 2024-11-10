#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,30,-23,450,200,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int maxIndex = 0;

    for(int i = 0; i<size; i++){
        if(arr[i]> arr[maxIndex]){
            maxIndex = i;
        }
    }
    cout<<"Index of largest no. is: " <<maxIndex <<endl;
    return 0;
}