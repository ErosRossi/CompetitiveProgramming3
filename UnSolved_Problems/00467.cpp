#include<iostream>
#include<vector>
// #include<stdio.h>

using namespace std;

vector<pair<int, int> > traffic_lights_green; // Start, end of green light.
vector<pair<int, int> > traffic_lights_go_stop; // Green time, stop(yellow+red) time.

void Get_cycle(int x); // Upgrade function.
int Check_green( void ); // Check function.

int main(){
  string s;
  int set = 0;
  while(getline( cin, s )){ // Read a line.
    if( s.length() == 0 ) break;
    set++;
    traffic_lights_green.clear();
    traffic_lights_go_stop.clear();
    int l = -1;
    int sl = s.length();
    while( l < sl ){ // Parse the line.
      int time = (s[l+1]-'0')*10 + (s[l+2]-'0');
      traffic_lights_green.push_back( make_pair( time, time + time - 5 ) );
      traffic_lights_go_stop.push_back( make_pair( time - 5, time + 5 ) );
      l += 3;
    }

    int time_counter = 0;
    for( int i = 0; i < traffic_lights_green.size(); i++ ){ // Run the first cycle for every trafficlight.
      Get_cycle(i);
    }

    bool f = true;

    while( 1 ){
      // Base case of exit --> All the end time of the green are greater of 60.
      f = true;
      for( int i = 0; i < traffic_lights_green.size(); i++ ){ // Run the first cycle for every trafficlight.
        if( traffic_lights_green[i].second < 3600 ){
          f = false;
          break;
        }
      }

      if( f == true ){ // Exit without solution case.
        break;
      }

      int to_up = Check_green();

      if( to_up == -1 ){ // Exit with solution case.
        f = false;
        break;
      }
      Get_cycle(to_up);
    }

    // Print solution.
    if( f == true ){
      // Print exit message.
      cout << "Set " << set << " is unable to synch after one hour." << endl;
    }
    else{
      // Print solution message.
      int m = -1;
      for( int i = 0; i < traffic_lights_green.size(); i++ ){ // Run the first cycle for every trafficlight.
        if( m < traffic_lights_green[i].first )
        {
          m = traffic_lights_green[i].first;
        }
      }
      cout << "Set " << set << " synchs again at " << m/60  << "minute(s) and " << m%60 << "second(s) after all turning green." << endl;
    }
  }
}

void Get_cycle(int x){
  traffic_lights_green[x].first = traffic_lights_green[x].second + traffic_lights_go_stop[x].second;
  traffic_lights_green[x].second = traffic_lights_green[x].first + traffic_lights_go_stop[x].first;
}

int Check_green( void ){
  int m = 4000; // Fist ending green light.
  bool green = true;
  pair<int,int> p;
  p.first = traffic_lights_green[0].first;
  p.second = traffic_lights_green[0].second;
  for( int i = 1; i < traffic_lights_green.size(); i++ ){ // Run the first cycle for every trafficlight.
    if( traffic_lights_green[i].second < m ){
      m = traffic_lights_green[i].second;
    }

    if( ( traffic_lights_green[i].second < p.first ) || ( traffic_lights_green[i].first > p.second ) ){
      green = false;
    }
  }
  if( green == true ){
    return -1;
  }

  return m;
}
