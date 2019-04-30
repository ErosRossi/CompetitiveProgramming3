#include <stdio.h>
#include <cstdlib>

using namespace std;

int main ()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++ )
  {
    int n;
    scanf("%d", &n );
    long a = ((n*567)/9 + 7492 )*235/47-498;
    a /= 10;
    printf("%ld\n", abs(a%10) );
  }
}
