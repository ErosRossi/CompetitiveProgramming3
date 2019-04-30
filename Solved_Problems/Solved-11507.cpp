#include<iostream>

using namespace std;

int main(){
  while(1){
    int L;
    int position = 0;
    cin >> L;
    if( L == 0 ) break;
    for( int i = 0; i < L-1; i++ ){
      string s;
      cin >> s;

      if( s == "+y" ){
        switch (position) {
          case 0:
            position = 1;
            break;

          case 1:
            position = 2;
            break;

          case 2:
            position = 3;
            break;

          case 3:
            position = 0;
            break;

          default:
            break;
        }
      } else if( s == "-y" ){

          switch (position) {
            case 0:
              position = 3;
              break;

            case 1:
              position = 0;
              break;

            case 2:
              position = 1;
              break;

            case 3:
              position = 2;
              break;

            default:
              break;
          }
      } else if( s == "+z" ){

          switch (position) {
            case 0:
              position = 4;
              break;

            case 4:
              position = 2;
              break;

            case 2:
              position = 5;
              break;

            case 5:
              position = 0;
              break;

            default:
              break;
          }

      } else if( s == "-z"){
          switch (position) {
            case 0:
              position = 5;
              break;

            case 4:
              position = 0;
              break;

            case 2:
              position = 4;
              break;

            case 5:
              position = 2;
              break;

            default:
              break;
          }
      }
    }
    switch(position){
      case 0:
        cout << "+x" << endl;
        break;

      case 1:
        cout << "+y" << endl;
        break;

      case 2:
        cout << "-x" << endl;
        break;

      case 3:
        cout << "-y" << endl;
        break;

      case 4:
        cout << "+z" << endl;
        break;

      case 5:
        cout << "-z" << endl;
        break;
    }
  }
}
