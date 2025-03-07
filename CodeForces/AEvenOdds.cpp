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
    long long n; cin>>n;
    long long k; cin>>k;
    long long start = (n+1)/2;
    if (k-1 < start) {
        cout<<2*(k-1)+1;
    } else {
        cout<<2*(k-start);
    }
}