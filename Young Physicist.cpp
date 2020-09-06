#include <iostream>
 
 
 
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
    int suma = 0, sumb = 0, sumc = 0;
    int a,b,c;
    for (int i = 0; i < n; i++) {
 
        cin >> a >> b >> c;
 
        suma += a;
        sumb += b;
        sumc += c;
    }
 
    if (suma == 0 && sumb == 0 && sumc == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
