#include<iostream>

using namespace std;

int main()
{
  int age1,age2;
  cout <<"Enter the first age: "<<"\n";
  cin >> age1;
  cout << "Enter the second age: "<<"\n";
  cin >> age2;

  if(age1 >100 && age2 >100)
  {
    cout <<"Does not matter , they both are 100";
    return 0;
  }
  else if(age1 > age2)
  {
    cout << "The first person is older\n";
  }
  else
  {
    cout << "The second person is older\n";
  }

}
