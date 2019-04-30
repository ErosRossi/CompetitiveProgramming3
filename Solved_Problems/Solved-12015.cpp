#include <iostream>

using namespace std;

int main ()
{
  int t;
  cin >> t;
  for (int j = 1; j < t+1; j++ )
  {
    int max = -1;
    pair<string, int> a[10];
    for ( int i = 0; i < 10; i++ )
    {
      cin >> a[i].first >> a[i].second;
      if (a[i].second > max )
      {
        max = a[i].second;
      }
    }
    cout << "Case #" << j << ":" << endl;
    for ( int i = 0; i < 10; i++ )
    {
      if ( a[i].second == max )
      {
        cout << a[i].first << endl;
      }
    }
  }
}
