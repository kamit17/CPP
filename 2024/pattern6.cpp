/*
    1
   222
  33333
 4444444
555555555

*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter number of rows: ";
    cin >>n;
    for (int i = 1; i <=n ; ++i){
        for(int j = i; j <n; ++j){
            cout<<" ";
        }
        for(int j = 1; j <= (2 * i )-1 ; ++j){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}