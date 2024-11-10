#include<iostream>
using namespace std;

int main(){
   
    int size = 7;
    int nums[] = {10,20,8,1,2,-2,199};

    int smallest =INT_MAX;

    for(int i = 0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout<<"Smallest no. is: " <<smallest <<endl;

    return 0;
}