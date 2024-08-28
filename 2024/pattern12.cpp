/*
A
B B
C C C
D D D D
E E E E E
*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number of rows: ";
    cin>>n;
    
    //Outerloop for the rows
    for(int i = 1; i <=n; i++){
        //Calcualte the character to print starting from A
        char ch = 'A' + i -1;

        //inner loop to print character multiple times

        for (int j = 0; j <=i; j++){
            cout << ch <<" ";
        }
        cout << endl;
    }
    return 0;
}