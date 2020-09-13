#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;

// This is a problem out of Codeforces Round #670

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;
        int temp;
        set<int> numbers;
        set<int> numbers2;
        int sum = 0;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (numbers.count(temp) != 0) {
                numbers2.insert(temp);
            } else {
                numbers.insert(temp);
            }

        }

        for (int j = 0; j <= 100; j++) {
           if (numbers.count(j) != 0) {
               continue;
           }
           else{
               sum += j;
               break;
           }
       }
        for (int j = 0; j <= 100; j++) {
            if (numbers2.count(j) != 0) {
                continue;
            }
            else{
                sum += j;
                break;
            }
        }
        cout << sum << endl;
        numbers.clear();
        numbers2.clear();
    }

