#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  int T,K;
  string s;
  int total = 0;
  scanf("%d", &T );
  for(int i = 0; i < T; i++ )
  {
    cin >> s;
    if (s == "donate" )
    {
      scanf("%d", &K);
      total += K;
    }
    else
    {
      printf("%d\n",total );
    }
  }
}
