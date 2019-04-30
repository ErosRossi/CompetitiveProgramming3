#include <iostream>

using namespace std;

int searchPerson( string s );

pair< string, int > v[11];
int n;

int main ()
{
  bool bline = false;
  cin >> n;
  do
  {

    if( bline == true ) cout << endl;

    for ( int i = 0; i < n; i++ )
    {
      string s;
      cin >> s;
      v[i].first = s;
      v[i].second = 0;
    }

    for ( int i = 0; i < n; i++ )
    {
      string s;
      cin >> s;
      int index = searchPerson(s);
      int spent;
      cin >> spent;
      int nPeople;
      cin >> nPeople;
      if (nPeople != 0 )
      {
        v[index].second -= nPeople*(spent/nPeople);
      }
      for ( int j = 0; j < nPeople; j++ )
      {
        string tmp;
        cin >> tmp;
        int indexR = searchPerson(tmp);
        v[indexR].second += spent/nPeople;
      }
    }

    for (int i = 0; i < n; i++ )
    {
      cout << v[i].first << " " << v[i].second << endl;
    }

    bline = true;

  } while ( cin >> n );
}

int searchPerson( string s )
{
  for ( int i = 0; i < n; i++ )
  {
    if ( v[i].first == s ) return i;
  }

  return -1;
}
