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
    // ribbon lenght n, each peace should have lenght a,b,c
    // maximum pieces
    int n,a,b,c;
 
    int calc;
    int max = 0;
 
    cin >> n >> a >> b >> c;
 
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++){
            calc = (a*i+b*j-n)/(-c);
            if (calc >= 0 && a*i+b*j+c*calc == n && i+j+calc >= max) {
                max = i+j+calc;
            }
        }
    }
    cout << max << endl;
}
 
