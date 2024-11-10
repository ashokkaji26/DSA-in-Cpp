#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"Enter size of the array: ";
    cin>> size;

    int marks[size];

    cout<<"Enter marks of " <<size <<" Students: \n";
    for(int i = 0; i<size; i++){        
        cin>>marks[i];
    }

    cout<<"Marks of " <<size <<" students: \n";
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }


    return 0;
}