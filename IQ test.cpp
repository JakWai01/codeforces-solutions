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
    int numbers[n];
    int counteven = 0;
    int countodd = 0;
    int indexeven;
    int indexodd;
    for (int i = 1; i <= n; i++) {
        cin >> numbers[i];
    }

    for (int i = 1; i <= n; i++) {
        if (numbers[i] % 2 == 0) {
            counteven++;
            indexeven = i;
        }
        if (numbers[i] % 2 != 0) {
            countodd++;
            indexodd = i;
        }
    }
    if (counteven == 1) {
        cout << indexeven << endl;
    }
    if (countodd == 1) {
        cout << indexodd << endl;
    }
}
