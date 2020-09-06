#include <iostream>
 
 
 
using namespace std;
 
 
 
int main() {
    string str;
    cin >> str;
    if (str.length() < 7) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < str.length()-6; i++) {
        if (str.length() >= 7 && ((str[i] == '1'  && str[i+1] == '1' && str[i+2] == '1' && str[i+3] == '1' && str[i+4] == '1' && str[i+5] == '1' && str[i+6] == '1') || (str[i] == '0') && (str[i+1] == '0') &&(str[i+2] == '0') &&(str[i+3] == '0') &&(str[i+4] == '0') &&(str[i+5] == '0') &&(str[i+6] == '0'))) {
            cout << "YES";
 
            return 0;
        }
 
    }
    cout << "NO";
 
}
