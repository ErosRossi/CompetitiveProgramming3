#include <iostream>

using namespace std;

int Mile( int x );
int Juice(int x);

int main ()
{
  int t;
  cin >> t;
  for (int j = 1; j < t+1; j++ )
  {
    int n;
    int costJ = 0;
    int costM = 0;
    cin >> n;
    for (int i = 0; i < n; i++ )
    {
      int tmp;
      cin >> tmp;
      costM += Mile(tmp);
      costJ += Juice(tmp);
    }
    cout << "Case " << j << ": ";
    if ( costJ < costM )
    {
      cout << "Juice " << costJ << endl;
    }
    else if ( costJ > costM )
    {
      cout << "Mile " << costM << endl;
    }
    else
    {
      cout << "Mile Juice " << costM << endl;
    }
  }
}

int Mile( int x )
{
  int cost = 0;
  do
  {
    cost += 10;
    x -= 30;
  }while ( x >= 0 );

  return cost;

}

int Juice(int x)
{
  int cost = 0;
  do
  {
    cost += 15;
    x -= 60;
  }while ( x >= 0 );

  return cost;

}
