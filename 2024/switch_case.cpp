#include <iostream>

using namespace std;

int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;
    switch (button)
    {
        case 'a':
        cout<<"Ciao" << endl;
        break;
        case 'b':
        cout<<"Bonjour" << endl;
        break; 
        case 'c':
        cout<<"Guttnestag" << endl;
        break;   

        default:
        cout<<"Value did not match"<<endl;
        break;            
    }


}