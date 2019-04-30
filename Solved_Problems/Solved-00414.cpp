#include<iostream>
#include<vector> 

using namespace std;

int main(){
  int N;
  while(1){
    cin >> N;
    if( N == 0 ) break;

    string line;
    getline( cin, line ); // To clear reading frame.
    int minS = 30; // Minumum number of consecutive spaces.
    vector<int> s; // Count the number of spaces in every line.

    for( int x = 0; x < N; x++ ){ // Iterate over the lines.
      getline( cin, line ); // Read the line.
      int countS = 0;
      for(int i = 0; i < 25; i++ ){ // Work on a line.
        if( line[i] != 'X' ){
          countS++;
        }
      }
      if( countS < minS ) minS = countS;

      s.push_back( countS );
    }

    int output = 0;
    for( int i = 0; i < N; i++ ){
      output += s[i] - minS;
    }
    cout << output << endl;
  }
}
