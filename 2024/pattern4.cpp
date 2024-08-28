
/*
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for (int i = 1; i <=n ; ++i){
        //Print spaces
        for(int j = i;j <n ; ++j){
            cout<<" ";
        }
        //print *
        for (int j = 1; j <=(2*i -1);++j){
            cout <<"*";
        }

        cout<<endl;
    }
    return 0;
}