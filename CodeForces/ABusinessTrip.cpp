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
    int k; cin>>k;
    vector<int> months;
    for (int i =0; i < 12; i++) {
        int monthVal; cin>>monthVal;
        months.push_back(monthVal);
    }
    sort(months.rbegin(), months.rend());
    int count=0;
    int i= 0;
    for (int i =0; i<months.size(); i++) {
        if (k<=0) {
            break;
        }
        k-=months[i];
        count++;
    }
    if (k<=0) {
        cout<<count;
    } else {
        cout<<-1;
    }
}