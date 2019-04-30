#include<iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  string s;
  getline(cin,s);
  for( int i = 0; i < n; i++ ){
    int cM = 0;
    int cF = 0;
    int cP = 0;
    getline(cin,s);
    int l = s.length();
    for( int j = 0; j < l; j++ ){
      if( s[j] == 'M' ){
        cM++;
        cP++;
      }
      if( s[j] == 'F' ){
        cF++;
        cP++;
      }
    }
    if( cF == cM && cP > 3 ){
      cout << "LOOP" << endl;
    }
    else{
      cout << "NO LOOP" << endl;
    }
  }
}
