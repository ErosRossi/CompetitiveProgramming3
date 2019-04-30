#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string a = "Hajj-e-Akbar";
  string b = "Hajj-e-Asghar";
  string s;
  int c = 0;
  while (1)
  {
    c++;
    cin >> s;

    if( s[0] == '*' ) break;

    if ( s == "Hajj" )
    {
      cout << "Case " << c << ": " << a << endl;
    }
    else
    {
      cout << "Case " << c << ": " << b << endl;
    }
  }
}
