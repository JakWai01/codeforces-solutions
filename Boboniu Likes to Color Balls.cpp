#include <iostream>



using namespace std;



int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        int r = 0,g = 0,b = 0,w = 0;
        cin >> r >> g >> b >> w;

        if ((r%2 + g%2 + b%2 + w%2) <= 1 ) {
            cout << "Yes" << endl;
        }
        else if (r > 0 && g > 0 && b > 0 && (((r-1)%2 + (g-1)%2 + (b-1)%2 + (w+3)%2) <= 1)){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
