#include<iostream>

using namespace std;
int doStuff () //just a small function to demonstrate scope
{
    return 2+3;
}
//global variables can be initialized just like other variables
int count_of_functions_calls = 0;
void fun ()
{
    //and the global variable is available here
    count_of_functions_calls++;
}
int main()
{
    fun();
    fun();
    fun();
    //and the global variable is also available here!
    cout << "Function fun was called "<< count_of_functions_calls<<" times"<<'\n';

}