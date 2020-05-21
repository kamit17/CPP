#include <iostream>
#include <string>

using namespace std;

int main()
{
  string password;
  int i = 0;
  while (true)
  {
    i++;
    if (i == 10)
    {
      continue;
    }
    cout << i << "\n";
  }
}
