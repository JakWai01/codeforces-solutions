#include <iostream>
 
 
 
using namespace std;
 
 
 
int main() {
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
 
    string str;
    cin >> str;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i]-48 == 1) {
            count1++;
        }
        if (str[i]-48 == 2) {
            count2++;
        }
        if (str[i]-48 == 3) {
            count3++;
        }
    }
 
 
    for (int i = 1; i < count1+1; i++) {
 
        if (i == count1 && count2 == 0 && count3 == 0) {
            cout << "1";
        } else {
            cout << "1+";
        }
    }
 
 
    for (int i = 1; i < count2+1; i++) {
        if (i == count2 && count3 == 0) {
            cout << "2";
        } else {
            cout << "2+";
        }
    }
 
  
 
    for (int i = 1; i < count3+1; i++ ) {
        if (i == count3) {
            cout << "3";
        } else {
            cout << "3+";
        }
    }
 
}
