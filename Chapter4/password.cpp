#include <iostream>
#include <string>

using namespace std;

int main()
{
  string password;

  cout << "Enter your password: "<< "\n";
  getline(cin,password,'\n');
  /*cout << getline;*/
  if(password == "xyzzy")
  {
    cout << "Access Allowed\n";
  }
  else{
    cout << "Bad Password. Access Denied\n";
    return 0;
  }
}
