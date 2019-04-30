#include <stdio.h>

using namespace std;

int main ()
{
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++ )
  {
    int L,W,H;
    scanf("%d %d %d", &L, &W, &H);
    if( (L <= 20) && (W <= 20) && (H <= 20) )
    {
      printf("Case %d: good\n", i+1);
    }
    else
    {
      printf("Case %d: bad\n", i+1);
    }
  }
}
