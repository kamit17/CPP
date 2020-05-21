#include <iostream>

using namespace std;

int main()
{
  int x;

  cout << "Enter the value of x: ";
  cin >> x;

  if( x != 0 && 10 / x < 2)
  {
    cout <<  "10 / x is less than 2\n";
  }
  else
  {
    cout << "Something:\n";
  }
}
