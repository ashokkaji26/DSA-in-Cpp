#include<iostream>
using namespace std;
// print the sum of 1st and last digit of a number.
int main() {
	// your code goes here
	
	

	    int n;
        cout<<"Enter a no: ";
	    cin>>n;
	    
	    int lastDigit = n % 10;
	    int sum = 0;
	    int firstDigit;
	    
		while(n > 0){
	        n= n/10;
	        
	        if(n>=1 && n<=9){
	           firstDigit = n;
	        }
	    }
	    cout<<"The sum of 1st and last digit of the given no. is: " <<(firstDigit+lastDigit) <<endl;
	
return 0;
}