#include<iostream>

using namespace std;

int main(){
  while(1){
    // Define variables.
    int h,l;
    int a[100010];
    int counter = 0;
    int pos;

    // Read the inputs.
    cin >> h;
    if( h == 0 ) break;
    cin >> l;

    for(int i = 0; i < l; i++ ){
      cin >> a[i];
    }

    //Solve the problem.
    for( int i = 0; i < l; i++ ){
      if( i == 0 ){
        counter = h - a[i];
        pos = a[i];
      } else if( a[i] < pos ){
        counter += pos - a[i];
      }
      pos = a[i];
    }

    //Print the outputs.
    cout << counter << endl;
  }
}
