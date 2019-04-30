#include <iostream>

using namespace std;

int main ()
{
  int t;
  cin >> t;
  for (int x = 0; x < t; x++ )
  {
    if ( x > 0 )
    {
      cout << endl;
    }
    bool check = true;
    int col;
    cin >> col;
    int a,b;
    cin >> a >> b;
    int value = abs(a - b);
    for( int i = 1; i < col; i++ )
    {
      cin >> a >> b;
      if ( !(abs(a - b) == value) )
      {
        check = false;
      }
    }
    if (check == true )
    {
      cout << "yes" << endl;
    }
    else
    {
      cout << "no" << endl;
    }
  }
}
