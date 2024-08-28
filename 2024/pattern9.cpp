/* Pascal's Triangle --  Pascal's Triangle is a triangular array of binomial coefficients, and each number is the sum of the two directly above it.
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i <n;i++){
        for(int j = 0; j <=n-i ; j++){
            cout<<" "; //print spaces
        }
        int val = 1;
        for(int j = 0; j <=i ; j++){
            cout << val<<" ";
            val = val *(i-j)/(j + 1); // Update val to next value in the row

        }
        cout<<endl;
    }
    return 0;
}