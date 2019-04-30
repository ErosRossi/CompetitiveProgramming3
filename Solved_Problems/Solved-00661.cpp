#include <iostream>

using namespace std;

pair< int, bool > a[25];

int main ()
{
  int n,m,c;
  int sequenceCounter = 0;

  while (1)
  {
    cin >> n;
    if ( n == 0 ) break;
    cin >> m >> c;
    sequenceCounter++;
    int max = 0;
    int ampereCounter = 0;

    for( int i = 1; i < n+1; i++ )
    {
      cin >> a[i].first;
      a[i].second = false;
    }

    for (int i = 0; i < m; i++ )
    {
      int tmp;
      cin >> tmp;
      if ( a[tmp].second == false )
      {
        ampereCounter += a[tmp].first;
        a[tmp].second = true;
      }
      else
      {
        ampereCounter -= a[tmp].first;
        a[tmp].second = false;
      }

      if ( ampereCounter > max )
      {
        max = ampereCounter;
      }
    }

    cout << "Sequence " << sequenceCounter << endl;
    if( max > c )
    {
      cout << "Fuse was blown." << endl;
    }
    else
    {
      cout << "Fuse was not blown." << endl;
      cout << "Maximal power consumption was " << max << " amperes." << endl;
    }

    cout << endl;
  }
}
