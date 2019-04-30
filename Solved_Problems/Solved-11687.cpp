#include<iostream>

using namespace std;

int main()
{
  string s;
  while(cin >> s){

    if(s == "END") break;

    int l = s.size();
    int x = l;
    if(l == 1 && s[0] == '1'){
      cout << '1' << endl;
      continue;
    }
    int counter = 1;
    string s2;
    int l2;
    while(1)
    {
      s2 = to_string(x);
      l2 = s2.size();
      if(l2 == x){
        cout << counter+1 << endl;
        break;
      }
      x = l2 ;
      counter++;
    }
  }
}
