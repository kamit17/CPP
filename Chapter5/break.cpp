#include <iostream>
#include <string>

using namespace std;

int main()
{
  string password;
  while (1)
  {
    cout << "Enter your password : ";
    cin >> password;
    if (password == "foobar")
    {
      break;
    }
  }
  cout <<"That is the correct password";
}
