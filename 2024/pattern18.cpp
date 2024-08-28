// C++ program to display a triangular pattern of numbers using nested while loop 

#include <iostream>
using namespace std;
                                            
int main() {
                                            
   int rows, i = 1;
   cout << "Enter the number of rows: ";
   cin >> rows;

   while (i <= rows) {
        int j = 1;
      while(j <= i) {
         cout << i;
         j++;
      }
    cout << "\n";
    i++;
   }
    return 0;
}