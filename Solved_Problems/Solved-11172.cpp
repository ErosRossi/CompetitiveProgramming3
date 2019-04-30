#include <stdio.h>

using namespace std;

int main (){

  int t;
  scanf("%d\n",&t );
  for ( int i = 0; i < t; i++ )
  {
    long a,b;
    scanf("%ld %ld", &a,&b );

    if( a == b )
    {
      printf("=\n");
    }
    else if (a < b)
    {
      printf("<\n");
    }
    else
    {
      printf(">\n");
    }
  }
}
