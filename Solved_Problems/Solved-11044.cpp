#include <stdio.h>

using namespace std;

int main (){

  int t;
  scanf("%d",&t);

  for (int i = 0; i < t; i++ )
  {
    int n,m;
    scanf("%d %d", &n, &m);

    int a = (n-2)/3;
    if ( (a*3) < (n-2) ) a++;

    int b = (m-2)/3;
    if ( (b*3) < (m-2) ) b++;

    printf("%d\n",a*b );
  }
}
