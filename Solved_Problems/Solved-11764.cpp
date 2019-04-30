#include <iostream>

using namespace std;

int main ()
{
  int t;
  cin >> t;
  for (int i = 1; i < t+1; i++ )
  {
    int n, start, end;
    int countLow = 0;
    int countHigh = 0;

    cin >> n >> start;
    for (int j = 0; j < n-1; j++)
    {
      cin >> end;
      if (start > end )
      {
        countLow++;
      }
      else if ( start < end )
      {
        countHigh++;
      }
      start = end;
    }
    cout << "Case " << i << ": " << countHigh << " " << countLow << endl;
  }
}
