#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int remainder = n % 10;          // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Append it to reversedNumber
        n = n / 10;                      // Remove the last digit from n
    }

    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}
