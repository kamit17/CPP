#include <iostream>
#include <string>

using namespace std;
int main()
{
  int password;
  cout << "Enter your password" <<"\n";
  //getline(cin,password,'\n');
  cin >> password ;

  if(password == 123456 || password == 23456)
  {
    cout << "Access Allowed\n";
  }
  else
  {
    cout << "Access Denied\n";
  }
}
