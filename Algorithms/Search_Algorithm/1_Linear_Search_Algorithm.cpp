#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){

    int size = 5;
    int target = 5;
    int arr[] = {1,3,4,5,8};

    cout<<"Target found at index: "<<linearSearch(arr,size,target)<<endl;

    return 0;
}