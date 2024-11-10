#include<iostream>
using namespace std;
// function to reverse an array.
void reverseArray(int arr[],int start, int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return;
}
int main(){
    int arr[] = {4,7,2,1,8,5};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1;

    reverseArray(arr,start,end);

    cout<<"Reverse of the Array is: ";
    for(int i = 0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}