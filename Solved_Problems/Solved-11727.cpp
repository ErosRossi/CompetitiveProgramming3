#include <stdio.h>

using namespace std;

int main ()
{
  int T;
  scanf("%d", &T);

  for (int i = 0; i < T; i++ )
  {
    int a,b,c;
    scanf("%d %d %d", &a ,&b, &c);

    if ( (a >= b && c <= b) || ( a <= b && c >= b) )
    {
      printf("Case %d: %d\n", i+1, b );
      continue;
    }

    if ( (b >= a && c <= a) || ( b <= a && c >= a) )
    {
      printf("Case %d: %d\n", i+1, a );
      continue;
    }

    if ( ( a >= c && b <= c) || ( a <= c && b >= c) )
    {
      printf("Case %d: %d\n", i+1, c );
      continue;
    }

  }
}
