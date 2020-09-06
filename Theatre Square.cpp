#include <iostream>



using namespace std;



int main() {
    unsigned long long int n,m,a;
    cin >> n >> m >> a;
    long long x = n / a;
    long long y = m / a;
    if (n % a != 0) {
        x = x+1;
    }

    if (m % a != 0) {
        y = y+1;
    }

    unsigned long long int result = x*y;

    cout << result;
}
