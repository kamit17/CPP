#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;
    cout<<"Enter the number of fibonacci numbers to print: ";
    cin >> n;

    cout<<"Fibonacci sequence: "<<endl;
    for(int i=1;i <=n ; i++){
        cout << a<<" ";
        int c = a + b;
        a = b;
        b = c;
        
    }
    //cout << endl;


}