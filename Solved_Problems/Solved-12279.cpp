#include <stdio.h>

using namespace std;

int main()
{
  int c = 0;
  while (1)
  {
    int N;
    int result = 0;
    c++;
    scanf("%d", &N);
    if (N == 0) break;
    for (int i = 0; i < N; i++ )
    {
      int tmp;
      scanf("%d", &tmp );
      if ( tmp > 0 )
      {
        result++;
      }
      else
      {
        result--;
      }
    }
    printf("Case %d: %d\n", c, result);
  }
}
