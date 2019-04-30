#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string eng = "HELLO";
  string ita = "CIAO";
  string de = "HALLO";
  string esp = "HOLA";
  string fra = "BONJOUR";
  string rus = "ZDRAVSTVUJTE";
  string check = "#";
  int counter = 0;

  while(1){

    counter++;
    string s;
    getline(cin, s);

    if (s == check ) break;

    if ( s == eng )
    {
      printf("Case %d: ENGLISH\n", counter);
      continue;
    }

    if ( s == esp )
    {
      printf("Case %d: SPANISH\n", counter);
      continue;
    }

    if ( s == de )
    {
      printf("Case %d: GERMAN\n", counter);
      continue;
    }

    if ( s == fra )
    {
      printf("Case %d: FRENCH\n", counter);
      continue;
    }
    if ( s == ita )
    {
      printf("Case %d: ITALIAN\n", counter);
      continue;
    }
    if ( s == rus )
    {
      printf("Case %d: RUSSIAN\n", counter);
      continue;
    }

    printf("Case %d: UNKNOWN\n", counter);
  }
}
