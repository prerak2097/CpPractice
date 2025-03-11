#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
 
long long sumNumbers(int numbers[], int size) {
    long long number = 0;
    for ( int i =0; i < size; i ++) {
        number=number*10+numbers[i];
    }
    return number;
}

int main() {
    int n; cin>>n;
    int numbers[n];
    int fiveCounts= 0;
    for ( int i =0; i < n; i ++) {
        int val; cin>>val;
        if (val == 5) {
            fiveCounts++;
        }
    }
    if (fiveCounts == n) {
        cout<<-1;
        return 0;
    }
    if (fiveCounts < 9) {
        cout<<0;
        return 0;
    } else {
        int print9Fives = fiveCounts/9;
        for ( int i =0; i < 9*print9Fives; i++) {
            cout<<5;
        }
        for (int i =0; i < n-fiveCounts; i++) {
            cout<<0;
        }
    }
}