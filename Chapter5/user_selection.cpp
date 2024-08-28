#include <iostream>
#include <string>
using namespace std;
int main()
{
  int option;

  do
  {
    cout << "Check one of the options below : "<<endl;
    cout << "1\n";
    cout << "2\n";
    cout <<"3\n";
    cout <<"4 \n";
    cin >> option ;
  }while (option < 1 || option >4);

cout << "You have chosen \n" << option << endl;
  return 0;

}
