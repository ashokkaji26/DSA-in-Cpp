#include<iostream>
using namespace std;

int main(){
    int size = 6;
    int nums[] = {2,4,-10,15,99,400};
    int largest = INT_MIN;

    for(int i = 0; i<size; i++){
        largest = max(nums[i],largest);
    }
    cout<<"Largest no. is: " <<largest <<endl;
    return 0;
}