#include <iostream>

using namespace std;

int main ()
{
  cout << "Lumberjacks:" << endl;
  int n;
  cin >> n;

  for ( int i = 0; i < n; i++ )
  {
    bool c = true;
    bool cRev = true;
    int start,end;
    cin >> start;
    for ( int j = 1; j < 10; j++ )
    {
      cin >> end;
      if (start > end)
      {
        c = false;
      }

      if ( start < end )
      {
        cRev = false;
      }

      start = end;
    }
    if ( c == true || cRev == true )
    {
      cout << "Ordered" << endl;
    }
    else
    {
      cout << "Unordered" << endl;
    }
  }
}
