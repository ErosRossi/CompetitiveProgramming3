#include <stdio.h>

using namespace std;

int main ()
{
  int t;
  scanf("%d", &t);
  for ( int i = 0; i < t; i++ )
  {
    int n;
    scanf("%d", &n);
    int min,max;
    scanf("%d", &max );
    min = max;
    for (int k = 1; k < n; k++ )
    {
      int tmp;
      scanf("%d", &tmp);
      if (tmp < min)
      {
        min = tmp;
        continue;
      }
      if (tmp > max)
      {
        max = tmp;
        continue;
      }
    }
    printf("%d\n", (max-min)*2 );
  }
}
