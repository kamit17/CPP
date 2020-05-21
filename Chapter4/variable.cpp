#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int x;
  cout << "Enter a number: ";
  cin >> x;
  if( x < 10)
  {
    cout << " You Entered a value less than 10" << "\n";
  }
  else
  {
    cout << " The value is not lesser than 10" << '\n';
  }
  return 0;
}
