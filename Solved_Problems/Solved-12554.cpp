#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int n;
  int peopleCounter = 0;
  cin >> n;
  string s[110];

  for ( int i = 0; i < n; i++ )
  {
    cin >> s[i];
  }

  int c = n/16;
  if ( c*16 < n )
  {
    c++;
  }
  for ( int i = 0; i < c; i++ )
  {
    for ( int j = 0; j < 16; j++ )
    {
      if ( j%4 == 0 )
      {
        cout << s[peopleCounter] << ": Happy" << endl;
        peopleCounter++;
        if (peopleCounter == n )
        {
          peopleCounter = 0;
        }
      }
      else if ( j%4 == 1 )
      {
        cout << s[peopleCounter] << ": birthday" << endl;
        peopleCounter++;
        if (peopleCounter == n )
        {
          peopleCounter = 0;
        }
      }
      else if ( j%4 == 2 )
      {
        cout << s[peopleCounter] << ": to" << endl;
        peopleCounter++;
        if (peopleCounter == n )
        {
          peopleCounter = 0;
        }
      }
      else if ( j == 11 )
      {
        cout << s[peopleCounter] << ": Rujia" << endl;
        peopleCounter++;
        if (peopleCounter == n )
        {
          peopleCounter = 0;
        }
      }
      else
      {
        cout << s[peopleCounter] << ": you" << endl;
        peopleCounter++;
        if (peopleCounter == n )
        {
          peopleCounter = 0;
        }
      }
    }
  }
}
