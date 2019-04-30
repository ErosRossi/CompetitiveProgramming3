#include <iostream>

using namespace std;

int main ()
{
  int t;
  cin >> t;
  for ( int i = 1; i < t+1; i++ )
  {
    int n;
    int max = -1;
    cin >> n;
    for (int j = 0; j < n; j++ )
    {
      int tmp;
      cin >> tmp;
      if (max < tmp )
      {
        max = tmp;
      }
    }
    cout << "Case " << i << ": " << max << endl;
  }
}
