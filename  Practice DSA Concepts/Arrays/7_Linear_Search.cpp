#include<iostream>
using namespace std;

int main(){
    
    // print -1 if target is not found.

    int target = 5;
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int ansIndex = -1;

    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            ansIndex = i;
        }
    }

    cout<<"Target is found at index: "<<ansIndex <<endl;


    return 0;
}