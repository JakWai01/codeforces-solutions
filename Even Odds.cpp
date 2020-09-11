#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    long long n;
    long long position;

    cin >> n;
    cin >> position;

    // gerade Zahlen = 2k;
    // ungerade Zahlen = 2k+1

    if (position <= (n+1)/2) {
        cout << 2*position-1 << endl;
    } else {
        cout << (position - (n+1)/2)*2 << endl;
    }

}
