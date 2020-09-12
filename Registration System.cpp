#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

// NOT NECESSARY
bool searchdatabase(const vector<string>& database, const string& s) {

    for (auto & j : database) {
        if (j == s) {
            return true;
        }
    }
    return false;
}

int main() {

// THIS SOLUTION IS USING A VECTOR BUT IS TO SLOW
//    int n;
//    cin >> n;
//
//    vector<string> database;
//
//    for (int i = 0; i < n; i++) {
//        string s;
//        cin >> s;
//        string sold = s;
//        int number = 1;
//        while(searchdatabase(database,s)) {
//            // solange das element enhalten ist, machen wir ein neues element mit einer höheren Zahl
//            s = sold;
//            s.append(to_string(number++));
//        }
//
//
//
//        if (s == sold) {
//            database.push_back(s);
//            cout << "OK" << endl;
//        } else {
//            database.push_back(s);
//            cout << s << endl;
//        }
//    }

// USING A MAP WORKS
    int n;
    cin >> n;

    map<string, int> database;
    string s;
    while (n--)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}
