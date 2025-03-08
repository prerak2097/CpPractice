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
    int n; cin>>n;
    if (n==1) {
        cout<<"1 0 0";
        return 0;
    }
    if (n==0) {
        cout<<"0 0 0";
        return 0;
    }
    vector<int> fibs;
    fibs.push_back(0);
    fibs.push_back(1);
    int i=2;
    while (fibs.back() < n) {
        fibs.push_back(fibs[i-2]+fibs[i-1]);
        i++;
    }
    int a= fibs[fibs.size()-3];
    int b = fibs[fibs.size()-4];
    cout<<a<<' '<<a<<' '<<b;    
}