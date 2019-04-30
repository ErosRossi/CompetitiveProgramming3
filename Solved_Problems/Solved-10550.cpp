#include <stdio.h>

using namespace std;

int main(){

int a,b,c,d;
scanf("%d %d %d %d", &a,&b,&c,&d );
while ( (a+b+c+d) > 0 )
{
  int result = 360*3; // 3 loops that I do every time.

  result += ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9;

  printf("%d\n", result );
  scanf("%d %d %d %d", &a,&b,&c,&d );
}

}
