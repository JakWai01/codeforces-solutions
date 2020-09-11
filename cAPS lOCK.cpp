#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool use = false;

    if (islower(s[0]) && s.length() == 1) {
        s[0] = toupper(s[0]);
        cout << s << endl;
        return 0;
    }
    if (isupper(s[0]) && s.length() == 1) {
        s[0] = tolower(s[0]);
        cout << s << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        // ALL UPPER = TRUE
        if(isupper(s[i])){
            use = true;
        }
        if(islower(s[i]) && i >= 1){
            use = false;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        // BEGIN LOWER, REST UPPER = TRUE
        if (i == 0 && use) {
            break;
        }
        if(isupper(s[0])) {
            use = false;
            break;
        }
        if(isupper(s[i]) && i >= 1) {
            use = true;
        }
        else {
            use = false;
            break;
        }

    }

    if (s.length() > 1 && use && isupper(s[0]) && isupper(s[1])) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    if (s.length() > 1 && use && islower(s[0]) && isupper(s[1])) {
        for (int i = 0; i < s.length(); i++) {
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            else {
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << s << endl;
}
