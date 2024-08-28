#include <iostream>

using namespace std;

int add(int x, int y)
{
    return (x+y);
}
int main()
{
    int result = add (1,4);
    cout << "The addition of 1 and 4 is " << result <<'\n';
    cout <<"The additon of 3 and 4 is " << add (3,4) <<'\n';
}