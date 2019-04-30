#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int t;
  cin >> t;
  for ( int j = 0; j < t; j++ )
  {
    int n;
    int p = 0;
    cin >> n;
    int a[110] = {0};
    for ( int i = 0; i < n; i ++ )
    {
      string s;
      cin >> s;
      if ( s == "RIGHT" )
      {
        p += 1;
        a[i+1] = 1;
      }
      else if ( s == "LEFT" )
      {
        p -= 1;
        a[i+1] = -1;
      }
      else
      {
        int index;
        cin >> s >> index;
        p += a[index];
        a[i+1] = a[index];
      }
    }
    cout << p << endl;
  }
}
