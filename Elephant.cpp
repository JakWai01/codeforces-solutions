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
    int count5;
    int count4;
    int count3;
    int count2;
    int count1;

    count5 = n / 5;
    n = n % 5;
    count4 = n / 4;
    n = n % 4;
    count3 = n / 3;
    n = n % 3;
    count2 = n / 2;
    n = n % 2;
    count1 = n;

    cout << count1 + count2 +count3 +count4 +count5 << endl;
}
