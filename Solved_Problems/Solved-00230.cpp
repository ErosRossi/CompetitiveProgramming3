#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct book {
    string title;
    string author;

    bool operator<(const book &other) const {
        if (author != other.author)
            return author < other.author;
        return title < other.title;
    }
};

int main(void) {
    string input;
    char t[85], a[85];
    vector<book> B;
    vector<book> returned;
    map<string,int> position;
    map<int,bool> taken;
    string title;

    while (getline(cin, input)) {
        if (input == "END") break;

        sscanf(input.c_str(), "\"%[^\"]\" by %[^\n\r]", t, a);
        book tmp;
        tmp.author = string(a);
        tmp.title = string(t);
        B.push_back(tmp);
    }

    sort(B.begin(), B.end());

    for(int i = 0; i < B.size(); i++){
        position[B[i].title] = i;
        taken[i] = false;
    }

    while (getline(cin, input)) {
        if (input == "END") break;

        if (input[0] == 'S') { // shelve
            sort(returned.begin(), returned.end());

            for(int i = 0; i < returned.size(); i++){
                int pos = position[returned[i].title];

                bool found = false;
                int after = pos - 1;

                while (after >= 0) {
                    if (taken[after] == false) {
                        found = true;
                        break;
                    }
                    after--;
                }

                if (found) {
                    cout << "Put \"" << B[pos].title << "\" after \"" << B[after].title << "\"" << endl;
                } else {
                    cout << "Put \"" << B[pos].title << "\" first" << endl;
                }

                taken[pos] = false;
            }

            cout << "END" << endl;
            returned.clear();

        } else if (input[0] == 'B') { // borrow
            sscanf(input.c_str(), "BORROW \"%[^\"]\"", t);
            title = string(t);
            int pos = position[title];
            taken[pos] = true;
        } else if (input[0] == 'R') { // return
            sscanf(input.c_str(), "RETURN \"%[^\"]\"", t);
            title = string(t);
            int pos = position[title];
            returned.push_back(B[pos]);
        }
    }

    return 0;
}
