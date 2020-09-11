#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    
    int n;

    cin >> n;
    
    for (int i = 0; i < n; i++){
        int angle;
        cin >> angle;
        if (360 % (180 - angle) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
}
