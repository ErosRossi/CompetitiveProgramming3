#include <iostream>

using namespace std;

int Check( int min );

int k,c;
int a[101];
int b[101];

int main(){
    int m;
    while( cin >> k ){
        int flag = 1;
        if( k == 0 ) break;
        cin >> m;
        for( int i = 0; i < k; i++ ){
            cin >> a[i];
        }
        for( int i = 0; i < m; i++ ){
            int r;
            cin >> c >> r;
            for( int j = 0; j < c; j++ ){
                cin >> b[j];
            }
            if( Check(r) == 0 ) flag = 0;
        }
        if( flag == 0 ){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
    }
}

int Check( int min ){
    int n = 0;
    for( int j = 0; j < c; j++ ){
        for( int i = 0; i < k; i++ ){
            if( b[j] == a[i] ) n++;
        }
    }
    if( n >= min ) return 1;
    return 0;
}
