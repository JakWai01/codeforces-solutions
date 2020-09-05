#include <iostream>
 
 
 
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int count = 0;
    int x;
    int y;
    for (int i = 0; i < k; i++) {
        cin >> x;
        if (x == 0) {
            cout << i;
            return 0;
        }
        count++;
    }
 
    for (int i = k; i < n; i++) {
        cin >> y;
 
        if (y == x) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
 
}
 
