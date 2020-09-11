#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
 
using namespace std;
 
int main() {
    // word s
    // is hello in the string if we are allowed to delete characters in between
    // iterate through loop and search h and then after that e and so on
    string s;
    cin >> s;
    int count = 0;
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'h') {
            count++;
            start = i;
            break;
        }
    }
    for (int i = start; i < s.length(); i++) {
        if (s[i] == 'e') {
            count++;
            start = i;
            break;
        }
    }
    for (int i = start; i < s.length(); i++) {
        if (s[i] == 'l') {
            count++;
            start = i+1;
            break;
        }
    }
    for (int i = start; i < s.length(); i++) {
        if (s[i] == 'l') {
            count++;
            start = i;
            break;
        }
    }
    for (int i = start; i < s.length(); i++) {
        if (s[i] == 'o') {
            count++;
            start = i;
            break;
        }
    }
    if (count == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
 
 
 
}
