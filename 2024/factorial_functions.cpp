#include<iostream>
using namespace std;

int fact (int n){
    int fact = 1;
    //int n;
    for (int i = 1; i <=n; ++i){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    int factorial = fact(n);
    cout<<factorial;
}