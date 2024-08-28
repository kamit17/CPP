#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    int attempt;
    string password;

  //cout << "Enter your password : \n";
  for (attempt = 0; attempt <=5; attempt++)
  {
    cout << "Enter your password: "<< endl;
    cin >> password;
    ++attempt;
    if(password =="foobar")
    {
      cout << "Granted Access: \n";
      break;
    }
    else
    {
      cout << "denied"<<endl;
    }
  }
}
