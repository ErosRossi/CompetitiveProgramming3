#include <iostream>

using namespace std;

string s;

int checkString( int start, int end, char value );

int main(){
  int counter = 1;
  while ( cin >> s ){
    cout << "Case " << counter << ":" << endl;
    int n;
    cin >> n;
    for ( int i = 1; i < n+1; i++ ){
      int a,b;
      int output;
      cin >> a >> b;
      if ( a > b ){
        output = checkString( b,a,s[b] );
      }
      else{
        output = checkString( a,b,s[a] );
      }

      switch (output) {
        case 1: cout << "Yes" << endl;
        break;

        case 0: cout << "No" << endl;
        break;
      }
    }
    counter++;
  }
}

int checkString( int start, int end, char value ){
  int result = 1;
  while (1){
    if ( end < start ) return result;
    if ( s[start] == s[end] && s[start] == value ) result *= 1;
    else result *= 0;

    end--;
    start++;
  }
}
