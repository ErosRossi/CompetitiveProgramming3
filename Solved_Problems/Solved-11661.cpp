#include<iostream>

using namespace std;

int main(){
  while(1){
    int k;
    cin >> k;

    if( k == 0 ) break;

    string s;
    cin >> s;

    int minDistance = k+1;
    int lastR = -k;
    int lastD = -k;

    for( int i = 0; i < k; i++ ){
      if( s[i] == 'Z' ){
        minDistance = 0;
        break;
      }

      if( s[i] == 'D' ){
        minDistance = min( minDistance, i - lastR );
        lastD = i;
      }

      if( s[i] == 'R'){
        minDistance = min( minDistance, i - lastD );
        lastR = i;
      }

    }

    cout << minDistance << endl;
  }
}
