#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    // k dollars first banana, has n dollars, wants to buy w bananas
    // how much dollars are missing?
    int k,n,w;
    cin >> k >> n >> w;
    int mult = 1;
    int price = 0;
    for (int i = 0; i < w; i++) {
        price += mult * k;
        mult++;
    }
    if (n > price) {
        cout << 0 << endl;
    } else {
        cout << price - n << endl;
    }
}

