#include <iostream>

using namespace std;

int main ()
{
  double H,U,D,F;
  while(1)
  {
    cin >> H;
    if ( H <= 0 ) break;
    cin >> U >> D >> F;
    F /= 100;
    double decreasingFactor = U*F;
    double high = 0.0;
    int day = 1;
    while(1)
    {
      high += U;
      if ( high > H )
      {
        cout << "success on day " << day << endl;
        break;
      }
      high -= D;
      if ( high < 0 )
      {
        cout << "failure on day " << day << endl;
        break;
      }
      U -= decreasingFactor;
      if ( U <= 0 )
      {
        U = 0;
      }
      day++;
    }
  }
}
