#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int n;
  scanf("%d", &n);
  string s;
  getline(cin, s);
  for (int i = 0; i < n; i++ )
  {
    getline(cin, s);
    if (s.length() == 5 )
    {
      printf("3\n" );
    }
    else if ( ( ( s[0] == 'o' ) && (s[1] == 'n') ) || ( (s[1] == 'n') && (s[2] == 'e') )|| ( ( s[0] == 'o' ) && (s[2] == 'e') ) ) {
      printf("1\n" );
    }
    else
    {
      printf("2\n" );
    }
  }
}
