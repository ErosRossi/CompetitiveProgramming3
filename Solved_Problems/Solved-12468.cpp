#include <iostream>

using namespace std;

int main ()
{
  while (1)
  {
    int a;
    cin >> a;
    if ( a < 0 ) break;
    int b;
    cin >> b;
    if ( abs(a-b) < 51 )
    {
      cout << abs(a-b) << endl;
    }
    else if ( a > b )
    {
      cout << 99-a+1+b << endl;
    }
    else
    {
      cout << a+99-b+1 << endl;
    }
  }
}
