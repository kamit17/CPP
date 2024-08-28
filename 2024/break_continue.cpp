#include <iostream>
using namespace std;

int main() {
    for (int i =1;i<=10;++i){
        if(i == 5){
            cout<<"Breaking the loop at i = "<<i<<endl;
            break;  //exits the loop when i equals 5
        }
        if(i%2==0){
            continue;  //Skips the rest of the loop when i is even
        }
        cout<<"i = "<<i<<endl;
    }

    cout<<"Loop exited"<<endl;

    return 0;
}