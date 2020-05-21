/*write a program that provides the option of tallying up the results of a poll with 3 possible
values. The first input to the program is the poll question; the next three inputs are the possible answers. The first answer is indicated by 1, the second by 2, the third by 3. The answers are tallied until a 0 is entered. The program should then show the results of the poll—try making a bar graph that shows the results properly scaled to fit on your screen no matter how many results were entered.
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string pollQuestion;  //first input to the program, the poll question
  string option1,option2,option3; //next 3 inputs, the poll answers
  int tally1=0,tally2=0,tally3=0; //tally variables to store value of tally
  string userinput; // the user response to the question to increase the tally

 // User defined options
  cout << "\n\n  Poll Question : \n" << endl;
  getline(cin,pollQuestion,'\n');
  //cin >> pollQuestion;

  //options
  cout << "1: ";
  getline(cin,option1,'\n');
  cout << "\n2: " ;
  getline(cin,option2,'\n');
  cout <<"\n3: ";
  getline(cin,option3,'\n');

cout << "Enter options, press 0 when finished" <<endl;

//Running the poll and keeping the tally
while (userinput !="0"){
getline(cin,userinput,'\n');

  if(userinput == option1){
  tally1++;
  }
  else if(userinput == option2)
  {
  tally2++;
  }

  else if( userinput == option3)
  {
  tally3++;
  }
  else if(userinput == "0")
  {
    continue;
  }
  else
  {
    cout <<"Invalid Option\n";
  }
}
//Output tally results
cout << "\n\n   Tally 1: " << tally1;
cout << "\n   Tally 2: " << tally2;
cout << "\n   Tally 3: " << tally3 << "\n\n";

//Bar Graph
cout << "\n\n\t" << option1 << "    ";
for(int x=0; x<tally1; x++){
  cout << "*";
}
  cout << "\n\t" << option2 << "    ";
for(int x=0; x<tally2; x++){
  cout << "*";
}
  cout << "\n\t" << option3 << "    ";
for(int x=0; x<tally3; x++){
  cout << "*";
}
cout << "\n\n";
	cout << "    1    2    3\n\n";
  return 0;
}
