/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = i; j < n; ++j) {
            cout << "  ";
        }

        // Print increasing numbers
        int num = i;
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            num++;
        }

        // Print decreasing numbers
        num -= 2; // Start one less than the peak
        for (int j = 1; j < i; ++j) {
            cout << num << " ";
            num--;
        }

        cout << endl;
    }

    return 0;
}
