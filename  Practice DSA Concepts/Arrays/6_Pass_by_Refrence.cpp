#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
    for(int i = 0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
    return;
}
int main(){
    int arr[] = {1,2,3};
    int size = 3;

    changeArr(arr,size);

    cout<<"After function call: " <<endl;

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}