#include <iostream>
#include <math.h>

using namespace std;

int sumNumber( int n );

int main ()
{
  int n;
  while ( 1 )
  {
    cin >> n;

    if ( n == 0 ) break;

    cout << sumNumber(n) << endl;

  }
}


int sumNumber( int n )
{
  int ndigits = log10(n) + 1;
  
  // Base case.
  if (ndigits == 1) return n;

  int sum = 0;

  for (int i = 0; i < ndigits; i++ )
  {
    sum += n%10;
    n /= 10;
  }

  return sumNumber(sum);

}
