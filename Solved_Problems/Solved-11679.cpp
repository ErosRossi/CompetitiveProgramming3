#include <iostream>

using namespace std;

int main ()
{
  int b,n;
  while (1)
  {
      cin >> b >> n;
      if ( b == 0 && n == 0 ) break;
      int money[b+2];
      for (int i = 1; i < b+1; i++ )
      {
        cin >> money[i];
      }
      for (int i = 0; i < n; i++ )
      {
        int d,c,v;
        cin >> d >> c >> v;
        money[d] -= v;
        money[c] += v;
      }
      int flag = 0;
      for (int i = 1; i < b+1; i++ )
      {
        if (money[i] < 0 )
        {
          flag = - 1;
        }
      }

      if (flag == -1)
      {
        cout << "N" << endl;
      }
      else
      {
        cout << "S" << endl;
      }

  }
}
