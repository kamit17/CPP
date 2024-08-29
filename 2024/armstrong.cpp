#include<iostream>
#include <cmath>  //for pow function
using namespace std;

int main(){
    int n,originalNumber,remainder,result=0;
    int digits = 0;

    cout<<"Enter a number: ";
    cin >> n;

    originalNumber = n;

    //Count the number of digits

    while(originalNumber != 0){
        originalNumber /=10;
        ++digits;
    }

    originalNumber = n;
     // Step 2: Calculate the sum of each digit raised to the power of the number of digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    // Step 3: Check if the sum is equal to the original number
    if (result == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;

}