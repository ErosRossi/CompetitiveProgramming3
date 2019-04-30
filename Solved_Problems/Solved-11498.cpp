#include <stdio.h>

using namespace std;

int main ()
{
  int K,N,M;
  while(1)
  {
    scanf("%d", &K);
    if (K == 0) break;
    scanf("%d %d", &N, &M );
    for (int i = 0; i < K; i++ )
    {
      int X,Y;
      scanf("%d %d", &X, &Y );

      if ( X == N || Y == M )
      {
        printf("divisa\n");
        continue;
      }

      if ( X > N )
      {
        if ( Y > M )
        {
          printf("NE\n");
        }
        else
        {
          printf("SE\n");
        }
      }
      else
      {
        if ( Y > M )
        {
          printf("NO\n");
        }
        else
        {
          printf("SO\n");
        }
      }

    }
  }
}
