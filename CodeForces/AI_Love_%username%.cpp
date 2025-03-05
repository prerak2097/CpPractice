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
    int contests; cin>>contests;
    int firstvalue; cin>>firstvalue;
    int maxSoFar = firstvalue;
    int minSoFar = firstvalue;
    int amazingPerformances = 0;
    for (int i=1; i < contests; i++) {
        int value; cin>>value;
        if (value < minSoFar) {
            minSoFar = min(minSoFar, value);
            amazingPerformances++;
        } else if (value > maxSoFar) {
            maxSoFar = max(maxSoFar, value);
            amazingPerformances++;
        }
    }
    cout<<amazingPerformances;
}