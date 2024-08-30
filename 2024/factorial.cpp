#include<iostream>
using namespace std;

int main(){

    int n;
    int factorial = 1;
    cout<<"Which number's factorial do you need? ";
    cin>>n;
    for(int i = 1; i <=n; ++i){
        factorial = factorial*i;
    }

    cout<<"factorial of "<<n<<" = "<< factorial <<endl;


    return 0;
}