#include <iostream>

using namespace std;

int main(){

string s;
int mem[100];
int T, current;

cin >> T;

for (int t = 1; t <= T; ++t){

  for (int i = 0; i < 100; ++i){
    mem[i] = 0;
  }

  current = 0;
  cin >> s;

  for (int i = 0; i < s.length(); i++){

    switch (s[i]){

      case '>':
        current++;
        if (current == 100){
          current = 0;
        }
        break;

      case '<':
        current--;
        if (current == -1){
          current = 99;
        }
        break;

      case '+':
        mem[current]++;
        if (mem[current] == 256){
          mem[current] = 0;
        }
        break;

      case '-':
        mem[current]--;
        if (mem[current] == -1){
          mem[current] = 255;
        }
    }
  }
  cout << "Case " << t << ":";
  for (int i = 0; i < 100; ++i){
    printf(" %02X", mem[i]);
  }
  cout << endl;
}

}
