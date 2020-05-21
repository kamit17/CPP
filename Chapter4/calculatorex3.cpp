#include <iostream>
#include<string>

using namespace std;

int main()
{



  string operation,multiplication,division,addition,subtraction;

  float operand1,operand2;

  cout << "Enter the operation that you want to perfom: ";
  //getline(cin,operation,'\n');
  cin >> operation;
  cout << "Enter the value of operand1: "<<"\n";
  cin >> operand1;
  cout << "Enter the value of operand2: " <<"\n";
  cin >> operand2;

  if (operation == "addition")
  {
    cout << operand1 << " + " << operand2 <<" = " << operand1+operand2 << endl;
  }
  else if (operation == "subtraction")
  {
    cout <<operand1 << " - " << operand2 <<" = " << operand1-operand2 << endl;
  }
  else if (operation == "multiplication")
  {
    cout <<operand1 << " * " << operand2 <<" = " << operand1*operand2 << endl;
  }
  else if(operation == "division")
  {
    cout <<operand1 << " / " << operand2 <<" = " << operand1/operand2 << endl;
  }
  else
  {
    cout << "Take care" << endl;
  }
cin.ignore();
}
