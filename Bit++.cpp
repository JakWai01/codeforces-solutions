#include <iostream>
 
 
 
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
    string x;
    int result = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x.find("++") != std::string::npos) {
            result = result + 1;
        }
        if (x.find("--") != std::string::npos) {
            result = result - 1;
        }
    }
    cout << result;
 
}
