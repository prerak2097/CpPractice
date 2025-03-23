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
    int s,n;
    cin>>s>>n;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++) {
        int d,bonus;
        cin>>d>>bonus;
        dragons.push_back({d,bonus});
    }
    sort(dragons.rbegin(), dragons.rend());
    int kiritoStrength = s;
    for (int i =dragons.size()-1; i>=0; i--) {
        if (kiritoStrength <= dragons[i].first) {
            cout<<"NO";
            return 0;
        }
        else {
            kiritoStrength+=dragons[i].second;
        }
    }
    cout<<"YES";
}