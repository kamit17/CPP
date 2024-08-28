#include <iostream>
using namespace std;

int main()
{
  int input,sum;

  do
  {
    cout << "Please provide  the input: \n"<< endl; //The toltal numbe of inputs that will be accepted.
    cin >> input;
    cout << "The Sum is : "<< sum << endl; // Output the sum
    sum+= input;  //increment the sum each time an input is provided
    cout << sum << "\n";  //output the sum
  }while (input != 0); //repeat the loop till the input is not 0 or exceeds the max tries

}
