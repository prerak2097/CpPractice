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

int main() {
    unordered_map<char, int> charCounts;
    string guest; getline(cin,guest);
    string host; getline(cin,host);
    string jumbledLetters; getline(cin, jumbledLetters);
    for (int i =0; i < jumbledLetters.size(); i++) {
        charCounts[jumbledLetters[i]]++;
    }
    for (int i=0; i < guest.size(); i++) {
        charCounts[guest[i]]--;
        if (charCounts[guest[i]] < 0) {
            cout<<"NO\n";
            return 0;
        }
    }
    for (int i=0; i < host.size(); i++) {
        charCounts[host[i]]--;
        if (charCounts[host[i]]<0) {
            cout<<"NO\n";
            return 0;
        }
    }

    for (int i =0; i < jumbledLetters.size(); i++) {
        if (charCounts[jumbledLetters[i]] > 0) {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}