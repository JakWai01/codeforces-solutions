#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s;
    cin >> s;
 
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
    }
    cout << count;
}
