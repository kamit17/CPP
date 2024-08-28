#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the start of the range (a): ";
    cin >> a;
    cout << "Enter the End of the range (b): ";
    cin >> b;

    //Check and print all prime  number  in the range.
    for (int num = a; num <= b; num++){
        int i;
        for ( i =2; i<num;i++){
            if(num % i == 0){
                break;  // num is not a prime number
            }
        }

        //After the loop , if i == num, then number is prime
        if( i == num){
            cout<<num<<endl;
        }
    }
    return 0;
}